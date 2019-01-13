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
    int countUnivalSubtrees(TreeNode* root) {

        if(!root)
            return 0;
        int result = 0;

        helper(root,root->val,result);

        return result;
    }

private:
    bool helper(TreeNode*root, int parentVal, int&result){

        if(!root)
            return true;
        bool leftNode = helper(root->left,root->val,result);
        bool rightNode = helper(root->right,root->val,result);

        if(leftNode && rightNode)
            ++result;

        return (root->val == parentVal) && leftNode && rightNode;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}