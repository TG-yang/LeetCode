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
    int count = 0;
    int key;
public:
    int kthSmallest(TreeNode* root, int k) {

        searchKthSmallest(root,k);
        return key;
    }

    void searchKthSmallest(TreeNode*root,int k){

        if(!root){
            ++count;
            return;
        }

        if(root->left)
            searchKthSmallest(root->left,k);
        ++count;
        if(count == k){
            key = root->val;
            return;
        }
        if(root->right)
            searchKthSmallest(root->right,k);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}