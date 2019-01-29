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
    vector<int> boundaryOfBinaryTree(TreeNode* root) {
        if(!root){
            return {};
        }
        vector<int> ret, leaves;
        if(root->left){
            ret = getSideMost(root,true);// the left side is from root to leftmost
            getLeaves(root->left, leaves);
            leaves.erase(leaves.begin());
            ret.insert(ret.end(),leaves.begin(),leaves.end());
        }else{
            ret.push_back(root->val);
        }
        if(root->right){
            leaves.clear();
            getLeaves(root->right, leaves);
            leaves.pop_back();
            ret.insert(ret.end(),leaves.begin(),leaves.end());
            vector<int> right_most = getSideMost(root,false);
            reverse(right_most.begin(),right_most.end());
            right_most.pop_back();
            ret.insert(ret.end(),right_most.begin(),right_most.end());
        }
        return ret;
    }

private:
    vector<int> getSideMost(TreeNode*root, bool is_left){
        vector<int> ret;
        TreeNode* node = root;
        while (node){
            ret.push_back(node->val);
            if(is_left){
                node = node->left ? node->left : node->right;
            } else{
                node = node->right ? node->right : node->left;
            }
        }
        return ret;
    }
    void getLeaves(TreeNode* node, vector<int>&leaves){
        if(!node->left && !node->right){
            leaves.push_back(node->val);
        }else{
            if(node->left){
                getLeaves(node->left, leaves);
            }
            if(node->right){
                getLeaves(node->right, leaves);
            }
        }
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}