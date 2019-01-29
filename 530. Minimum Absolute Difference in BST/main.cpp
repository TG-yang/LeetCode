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
    int getMinimumDifference(TreeNode* root) {
        vector<int>ret;
        helper(root,ret);
        sort(ret.begin(),ret.end());
        int Min = INT_MAX;
        for(int i = 1; i < ret.size(); ++i){
            Min = min(Min,ret[i] - ret[i - 1]);
        }

        return Min;
    }

private:
    void helper(TreeNode*root, vector<int>&ret){
        if(!root)
            return;
        ret.push_back(root->val);
        helper(root->left,ret);
        helper(root->right,ret);
        return;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}