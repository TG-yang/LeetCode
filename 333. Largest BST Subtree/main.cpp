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
    int largestBSTSubtree(TreeNode* root) {
        int res = 0;
        helper(root,res);

        return res;
    }

private:
    vector<int> helper(TreeNode* root, int&res){

        if(!root)
            return vector<int>{0,INT_MIN,INT_MAX};

        auto left = helper(root->left,res);
        auto right = helper(root->right,res);

        if(root->val > left[1] && root->val < right[2]){

            int Min = min(root->val,left[2]);
            int Max = max(root->val,right[1]);

            res = max(res,left[0] + right[0] + 1);
            return vector<int>{(left[0] + right[0] + 1),Max, Min};
        }
        return vector<int>{0,INT_MAX,INT_MIN};
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}