#include <iostream>


using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    int boolen = 1;
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        helper(p,q,boolen);
        if(boolen == 1)
            return true;
        else
            return false;
    }

public:
    void helper(TreeNode*p,TreeNode*q,int&boolen){
        if((p == NULL && q != NULL) || (p != NULL && q == NULL)){
            boolen = 0;
            return;
        }
        if(p == NULL && q == NULL)
            return;

        helper(p->left,q->left,boolen);
        if(p->val != q->val)
            boolen = 0;
        helper(p->right,q->right,boolen);
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}