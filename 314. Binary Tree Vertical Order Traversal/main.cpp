#include <iostream>
#include <vector>
#include <map>
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
    vector<vector<int>> verticalOrder(TreeNode* root) {

        if(!root)
            return {};

        vector<vector<int>> result;
        map<int,vector<int>>hash;
        queue<pair<int,TreeNode*>>queue1;

        queue1.push(make_pair(0,root));

        while(!queue1.empty()){

            auto temp = queue1.front();
            queue1.pop();

            int val = temp.first;
            TreeNode*node = temp.second;
            hash[val].push_back(node->val);

            if(node->left)
                queue1.push(make_pair(val - 1, node->left));
            if(node->right)
                queue1.push(make_pair(val + 1, node->right));
        }

        for(auto item : hash)
            result.push_back(item.second);

        return result;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}