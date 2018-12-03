#include <iostream>
#include <math.h>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        return height(root) == -1 ? false : true;
    }


    int height(TreeNode*root){
        if(root == NULL)
            return 0;
        int l = height(root->left);
        if(l < 0) return -1;
        int r = height(root->right);
        if(r < 0) return -1;
        if(abs(l - r) > 1) return -1;
        return max(l,r) + 1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}