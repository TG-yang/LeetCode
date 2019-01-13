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
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {

        if(!root)
            return root;

        inorderSuccessor(root->left,p);
        if(p == pre)
            res = root;
        pre = root;

        inorderSuccessor(root->right,p);

        return res;
    }

private:
    TreeNode*pre = NULL, *res = NULL;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}