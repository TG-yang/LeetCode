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
    vector<vector<int>> findLeaves(TreeNode* root) {

        vector<vector<int>> result;
        if(!root)
            return result;
        while(root->left || root->right){
            vector<int>item;
            helper(root,root,item);
            result.push_back(item);
        }
        vector<int>item;
        item.push_back(root->val);
        result.push_back(item);
        return result;
    }

private:
    void helper(TreeNode* root, TreeNode*pre, vector<int>&item){

        if(!root)
            return;
        if(root->left == NULL && root->right == NULL){
            item.push_back(root->val);
            if(pre->left == root)
                pre->left = NULL;
            else if(pre->right == root)
                pre->right = NULL;
        }else{
            helper(root->left,root,item);
            helper(root->right,root,item);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}