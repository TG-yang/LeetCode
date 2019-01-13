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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        while(1){
            if((p->val - root->val) * (q->val - root->val) < 0)
                return root;
            else if(p->val < root->val && q->val < root->val){
                root = root->left;
            }else if(p->val > root->val && q->val > root->val){
                root = root->right;
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}