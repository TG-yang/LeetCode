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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        return build(preorder,0,preorder.size() - 1,inorder,0,inorder.size() - 1);
    }

private:
    TreeNode*build(vector<int>pre, int preStart, int preEnd, vector<int>in, int inStart, int inEnd){
        if(inStart > inEnd || preStart > preEnd)
            return NULL;

        int rootVal = pre[preStart];
        int rootIndex;
        for(int i = inStart; i <= inEnd; ++i){
            if(in[i] == rootVal){
                rootIndex = i;
                break;
            }
        }

        int len = rootIndex - inStart;
        TreeNode*root = new TreeNode(rootVal);
        root->left = build(pre, preStart + 1, preStart + len, in, inStart, rootIndex - 1);
        root->right = build(pre, preStart + len + 1, preEnd, in, rootIndex + 1, inEnd);

        return root;
    }
};
//https://www.cnblogs.com/springfor/p/3884034.html
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}