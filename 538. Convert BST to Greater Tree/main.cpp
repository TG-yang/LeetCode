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
    TreeNode* convertBST(TreeNode* root) {
        if(!root) return NULL;
        vector<int>nodeVal;
        buildVec(root,nodeVal);
        sort(nodeVal.begin(),nodeVal.end());
        vector<int>sumVec;
        int sum = 0;
        for(int i = 0; i < nodeVal.size(); ++i){
            sum += nodeVal[i];
            sumVec.push_back(sum);
        }
        buildTree(root,nodeVal,sumVec,sum);
        return root;
    }

private:
    void buildVec(TreeNode* root, vector<int>&nodeVal){
        if(!root)
            return;
        nodeVal.push_back(root->val);
        buildVec(root->left,nodeVal);
        buildVec(root->right,nodeVal);
    }
    void buildTree(TreeNode* root, vector<int>&nodeVal, vector<int>&sumVal, int sum){
        if(!root) return;
        int index = upper_bound(nodeVal.begin(),nodeVal.end(),root->val) - nodeVal.begin();
        if(index != nodeVal.size()){
            root->val += (sum - sumVal[index - 1]);
        }
        buildTree(root->left,nodeVal,sumVal,sum);
        buildTree(root->right,nodeVal,sumVal,sum);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}