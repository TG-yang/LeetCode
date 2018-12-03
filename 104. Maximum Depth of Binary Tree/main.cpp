#include <iostream>


using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//class Solution {
//public:
//    int maxDepth(TreeNode* root) {
//        if(!root)
//            return 0;
//        if(!root->left && !root->right)
//            return 1;
//
//        int result = 0;
//        helper(root,1,result);
//        return result;
//    }
//
//    void helper(TreeNode* root,int i,int&max){
//        if(!root)
//            return;
//        helper(root->left,i + 1,max);
//        if(i > max)
//            max = i;
//        helper(root->right,i + 1,max);
//
//    }
//};
class Solution {
public:
    int maxDepth(TreeNode* root) {
        return getHeight(root);
    }

    int getHeight(TreeNode* root)
    {
        if(root==NULL)
            return 0;

        int a = getHeight(root->left);
        int b = getHeight(root->right);

        return max(a,b)+1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}