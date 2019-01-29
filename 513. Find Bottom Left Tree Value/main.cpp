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
    int findBottomLeftValue(TreeNode* root) {
        vector<int>res(2,0);
        return helper(root,1,res);
    }

private:
    int helper(TreeNode* root, int depth, vector<int>&res){
        if(depth > res[1]){
            res[0] = root->val;
            res[1] = depth;
        }
        if(root->left)
            helper(root->left,depth + 1, res);
        if(root->right)
            helper(root->right,depth + 1, res);

        return res[0];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}