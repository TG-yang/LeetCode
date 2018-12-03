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
    vector<vector<int>>result;
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(!root)
            return result;
        vector<int>oneResult;
        findPath(root,sum,oneResult);
        return result;
    }

    void findPath(TreeNode*root,int sum, vector<int>oneResult){
        oneResult.push_back(root->val);
        if(!root->right && !root->left && root->val == sum){
            result.push_back(oneResult);
        }

        if(root->left){
            findPath(root->left,sum - root->val, oneResult);
        }
        if(root->right){
            findPath(root->right,sum - root->val, oneResult);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}