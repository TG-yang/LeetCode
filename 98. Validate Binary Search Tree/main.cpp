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
    vector<int>vecNode;
public:
    bool isValidBST(TreeNode* root) {

        if(root == nullptr)
            return true;
        middleTraverse(root);
        for(int i = 1; i < vecNode.size(); ++i){
            if(vecNode[i - 1] >= vecNode[i])
                return false;
        }
        return true;
    }

private:
    void middleTraverse(TreeNode*root){
        if(root == nullptr) return;

        middleTraverse(root->left);
        vecNode.push_back(root->val);
        middleTraverse(root->right);
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}