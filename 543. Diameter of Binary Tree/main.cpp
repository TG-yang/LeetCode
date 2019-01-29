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
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int res = depthOfNode(root->left) + depthOfNode(root->right);
        return max(res, max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
    }

private:
    int depthOfNode(TreeNode* node){
        if(!node) return 0;
        return max(depthOfNode(node->left), depthOfNode(node->right));
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}