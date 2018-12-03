#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)
            return false;
        return findPathSum(root,sum);
    }

    bool findPathSum(TreeNode* root,int sum){
        if(!root->left && !root->right && root->val == sum)
            return true;

        if(root->left && findPathSum(root->left,sum - root->val))
            return true;
        if(root->right && findPathSum(root->right,sum - root->val))
            return true;

        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}