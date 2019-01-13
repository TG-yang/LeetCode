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

public:
    int countNodes(TreeNode* root) {

        if(root == NULL)
            return 0;

        int l = getLeft(root) + 1;
        int r = getRight(root) + 1;

        if(l == r){
            return (2 << (l - 1)) - 1;
        }else{
            return countNodes(root->left) + countNodes(root->right) + 1;
        }

    }

private:
    int getLeft(TreeNode* root){

        int count = 0;
        while(root->left != NULL){
            root = root->left;
            ++count;
        }

        return count;
    }

    int getRight(TreeNode* root){

        int count = 0;
        while(root->right != NULL){
            root = root->right;
            ++count;
        }

        return count;
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}