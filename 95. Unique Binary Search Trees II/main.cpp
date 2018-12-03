#include <iostream>
#include <vector>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {

public:
    vector<TreeNode*> generateTrees(int n) {
        if(n == 0){
            vector<TreeNode*> result;
            return result;
        }

        return dfs(n,1);
    }

private:
    vector<TreeNode*> dfs(int n, int start_val){
        vector<TreeNode*>result;
        if(n == 0){
            result.push_back(NULL);
            return result;
        }
        if(n == 1){
            result.push_back(new TreeNode(start_val));
            return result;
        }

        for(int i = 0; i < n; ++i){
            vector<TreeNode*>left = dfs(i, start_val);
            vector<TreeNode*>right = dfs(n - i - 1, start_val + i + 1);

            for(int m = 0; m < left.size(); ++m){
                for(int n = 0; n < right.size(); ++n){
                    TreeNode*root = new TreeNode(start_val + i);
                    root->left = left[m];
                    root-> right = right[n];

                    result.push_back(root);
                }
            }
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}