#include <iostream>
#include <vector>
#include<stack>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>result;
        if(!root)
            return result;
        queue<TreeNode*> sta;
        sta.push(root);
        int size;

        while(!sta.empty()){
            size = sta.size();
            vector<int>oneResult;
            while(size--){
                TreeNode*value = sta.front();
                sta.pop();
                oneResult.push_back(value->val);
                if(value->left)
                    sta.push(value->left);
                if(value->right)
                    sta.push(value->right);
            }
            result.push_back(oneResult);
        }

        vector<vector<int>>res;
        for(int i = result.size() - 1; i >= 0; --i)
            res.push_back(result[i]);

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}