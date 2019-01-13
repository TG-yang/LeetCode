#include <iostream>
#include <stack>
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
    TreeNode* invertTree(TreeNode* root) {

        myInverTree(root);

        return root;
    }

    void myInverTree(TreeNode *root){

        if(!root)
            return;

        TreeNode*left = root->left;
        TreeNode*right = root->right;
        root->left = right;
        root->right = left;

        myInverTree(root->left);
        myInverTree(root->right);

        return;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}