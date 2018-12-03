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
    bool isSymmetric(TreeNode* root) {
        if(NULL == root) return true;
        if(NULL == root->left && NULL == root->right) return true;
        return isMirrorTree(root->left,root->right);
    }

    bool isMirrorTree(TreeNode* p, TreeNode* q) {
        if(NULL == p && NULL == q) return true;
        if(NULL == p || NULL == q || p->val!=q->val || !isMirrorTree(p->left,q->right) || !isMirrorTree(p->right,q->left) )
            return false;
        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}