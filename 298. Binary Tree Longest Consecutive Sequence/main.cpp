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
private:
    int maxLength = INT_MIN;
public:
    int longestConsecutive(TreeNode* root) {
        if(!root)
            return 0;

        if(root->left)
            helper(root->left,1,root->val);
        if(root->right)
            helper(root->right,1,root->val);

        return maxLength == INT_MIN ? 1 : maxLength;
    }

private:

    void helper(TreeNode* root, int lengths,int pre){

        if(!root)
            return;

        if(root->val == pre + 1){
            ++lengths;
        } else
            lengths = 1;

        if(lengths > maxLength)
            maxLength = lengths;

        helper(root->left,lengths,root->val);
        helper(root->right,lengths,root->val);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}