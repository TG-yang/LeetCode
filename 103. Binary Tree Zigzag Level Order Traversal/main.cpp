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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root)
            return result;

        queue<TreeNode*> q;
        q.push(root);
        bool uneven = true;
        while(!q.empty()){
            vector<int>tmp;
            int size = q.size();
            while (size--){
                TreeNode*node = q.front();
                q.pop();
                tmp.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            if(!uneven)
                reverse(tmp.begin(),tmp.end());

            uneven = uneven? false:true;

            result.push_back(tmp);
        }
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}