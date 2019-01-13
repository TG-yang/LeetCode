#include <iostream>
#include <string>
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
    vector<string>result;
public:
    vector<string> binaryTreePaths(TreeNode* root) {

        if(!root)
            return result;
        string str = to_string(root->val);

        if(root->left)
            searchPaths(root->left,str);
        if(root->right)
            searchPaths(root->right,str);
        if(!root->left && !root->right)
            result.push_back(str);
        return result;
    }

    void searchPaths(TreeNode* root,string str){

        str = str + "->" + to_string(root->val);
        if(root->left)
            searchPaths(root->left,str);
        if(root->right)
            searchPaths(root->right,str);

        if(!root->left && !root->right)
            result.push_back(str);
        return;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}