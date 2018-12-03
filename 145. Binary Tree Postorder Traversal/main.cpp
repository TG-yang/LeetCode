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
private:
    vector<int>result;

public:
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return result;
    }

private:
    void postorder(TreeNode*root){
        if(!root)
            return;
        if(root->left)
            postorder(root->left);
        if(root->right)
            postorder(root->right);
        result.push_back(root->val);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}