#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {

        vector<vector<int>> middle;
        vector<int> result;

        if(!root)
            return result;

        queue<TreeNode*>myTree;
        myTree.push(root);

        while(!myTree.empty()){
            int size = myTree.size();
            vector<int>res;
            while(size--){
                TreeNode*node = myTree.front();
                myTree.pop();
                res.push_back(node->val);
                if(node->left)
                    myTree.push(node->left);
                if(node->right)
                    myTree.push(node->right);
            }
            middle.push_back(res);
        }

        for(int i = 0; i < middle.size(); ++i)
            result.push_back(middle[i].back());
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}