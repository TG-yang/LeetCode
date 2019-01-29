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
    vector<int> largestValues(TreeNode* root) {
        if(!root)
            return {};
        vector<int>ret;
        queue<TreeNode*>queue1;
        queue1.push(root);

        while (!queue1.empty()){
            int size = queue1.size();
            int Max = INT_MIN;
            for(int i = 0; i < size; ++i){
                TreeNode* node = queue1.front();
                queue1.pop();
                Max = max(Max,node->val);
                if(node->left)
                    queue1.push(node->left);
                if(node->right)
                    queue1.push(node->right);
            }
            ret.push_back(Max);
        }

        return ret;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}