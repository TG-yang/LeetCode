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
    int rob(TreeNode* root) {
        if(root == NULL)
            return 0;
        else if(root->right == NULL && root->left == NULL)
            return root->val;
        else if(root->right == NULL)
            return max(root->val + rob(root->left->right) + rob(root->left->left), rob(root->left));
        else if(root->left == NULL)
            return max(root->val + rob(root->right->left) + rob(root->right->right), rob(root->right));
        else
            return max(root->val + rob(root->left->right) + rob(root->left->left) + rob(root->right->left) + rob(root->right->right), rob(root->left) + rob(root->right));
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}