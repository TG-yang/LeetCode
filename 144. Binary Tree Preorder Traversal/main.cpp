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
    vector<int> preorderTraversal(TreeNode* root) {
        preorderT(root);
        return result;
    }

private:
    void preorderT(TreeNode*root){
        if(!root)
            return;
        result.push_back(root->val);
        if(root->left)
            preorderT(root->left);
        if(root->right)
            preorderT(root->right);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}