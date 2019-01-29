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
    int longestConsecutive(TreeNode* root) {
        if(root == NULL)
            return 0;
        int left = findPath(root->left,root->val, 1) + findPath(root->right,root->val, -1) + 1;
        int right = findPath(root->left,root->val, -1) + findPath(root->right,root->val, 1) + 1;
        int curMax = max(left, right);
        int curChildMax = max(longestConsecutive(root->left), longestConsecutive(root->right));

        return max(curChildMax,curMax);
    }

private:
    int findPath(TreeNode*root, int preValue, int diff){
        if(!root)
            return 0;
        if(root->val == (preValue + diff)){
            int left = findPath(root->left,root->val,diff);
            int right = findPath(root->right,root->val,diff);
            return max(left,right) + 1;
        }else{
            return 0;
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}