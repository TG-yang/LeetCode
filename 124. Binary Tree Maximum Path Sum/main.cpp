#include <iostream>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
private:
    int globalVal = INT_MIN;
public:
    int maxPathSum(TreeNode* root) {
        if(root == NULL)
            return 0;
        maxSum(root);
        return globalVal;
    }

    int maxSum(TreeNode* root){
        if(root == NULL)
            return -1;

        int curSum = root->val;
        int leftSum = maxSum(root->left);
        int rightSum = maxSum(root->right);

        if(leftSum > 0)
            curSum += leftSum;
        if(rightSum > 0)
            curSum += rightSum;

        globalVal = globalVal > curSum ? globalVal : curSum;

        return max(root->val, max(root->val + leftSum, root->val + rightSum));
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}