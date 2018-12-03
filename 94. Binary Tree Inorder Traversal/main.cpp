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
    vector<int> result;
public:
    vector<int> inorderTraversal(TreeNode* root) {

        inOrder(root,result);

        return result;
    }

    void inOrder(TreeNode*root,vector<int>&result){

        if(!root)
            return;
        if(root->left != NULL){
            inOrder(root->left,result);
        }
        result.push_back(root->val);
        if(root->right != NULL){
            inOrder(root->right,result);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}