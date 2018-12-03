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
    void flatten(TreeNode* root) {
        while(root){
            if(root->left){
                TreeNode*cur = root->left;
                while(cur->right)
                    cur = cur->right;
                cur->right = root->right;
                root->right = root->left;
                root->left = NULL;
            }
            root = root->right;
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}