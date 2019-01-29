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
    int pathSum(TreeNode* root, int sum) {

        if(!root)
            return 0;
        return pathSum(root->left,sum) + pathSum(root->right,sum) + helper(root, sum);
    }

private:
    int helper(TreeNode* root, int sum){
        if(!root)
            return 0;
        int count = (sum == root->val ? 1 : 0);

        return helper(root->left,sum - root->val) + helper(root->right, sum - root->val) + count;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}