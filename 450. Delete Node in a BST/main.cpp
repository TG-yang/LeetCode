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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        if(root->val > key){
            root->left = deleteNode(root->left,key);
            return root;
        }
        if(root->val < key){
            root->right = deleteNode(root->right,key);
            return root;
        }

        TreeNode *left = root->left, *right = root->right, *temp = left;
        delete root;
        if(!left || !right) return left ? left : right;
        while (temp->right) temp = temp->right;
        temp->right = right->left;
        right->left = left;

        return right;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}