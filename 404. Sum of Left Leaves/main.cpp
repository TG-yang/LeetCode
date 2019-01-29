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
    int sumOfLeftLeaves(TreeNode* root) {

        if(!root)
            return 0;
        if(!root->left && !root->right)
            return root->val;

        int sum = 0;
        helper(root,root,sum);

        return sum;
    }

private:
    void helper(TreeNode* root, TreeNode* pre,int&sum){

        if(root->left == NULL && root->right == NULL && pre->left == root){
            sum += root->val;
            return;
        }

        if(root->left)
            helper(root->left,root,sum);
        if(root->right)
            helper(root->right,root,sum);

        return;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}