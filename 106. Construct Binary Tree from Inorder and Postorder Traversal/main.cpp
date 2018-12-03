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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return build(inorder,0,inorder.size() - 1,postorder,0,postorder.size() - 1);
    }

private:
    TreeNode*build(vector<int>in, int inStart, int inEnd, vector<int>post, int postStart, int postEnd){
        if(inStart > inEnd || postStart > postEnd)
            return NULL;
        int rootVal = post[postEnd];
        int rootIndex;
        for(int i = 0; i <= inEnd; ++i){
            if(in[i] == rootVal){
                rootIndex = i;
                break;
            }
        }
        TreeNode*root = new TreeNode(rootVal);
        int len = rootIndex - inStart;
        root->left = build(in, inStart, rootIndex - 1, post, postStart, postStart + len - 1);
        root->right = build(in, rootIndex + 1, inEnd, post, postStart + len, postEnd - 1);

        return root;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}