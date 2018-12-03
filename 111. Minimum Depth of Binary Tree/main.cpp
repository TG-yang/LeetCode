#include <iostream>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private: vector<int>result;
public:
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        find(root->left,root->right,1);
        sort(result.begin(),result.end());
        return result[0];
    }
    void find(TreeNode*left, TreeNode*right, int deep){
        if(!left && !right){
            result.push_back(deep);
            return;
        }
        if(left)
            find(left->left,left->right,deep + 1);
        if(right)
            find(right->left,right->right,deep + 1);

        return;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}