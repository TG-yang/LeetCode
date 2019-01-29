#include <iostream>
#include <vector>

using namespace std;


// Definition for a Node.
class Node {
public:
    int val = NULL;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:

    // Encodes an n-ary tree to a binary tree.
    TreeNode* encode(Node* root) {

        if(!root) return NULL;
        TreeNode* head = new TreeNode(root->val);
        if(!root->children.empty()){
            head->left = encode(root->children[0]);
        }
        TreeNode*cur = head->left;
        for(int i = 1; i < root->children.size(); ++i){
            cur->right = encode(root->children[i]);
            cur = cur->right;
        }

        return head;
    }

    // Decodes your binary tree to an n-ary tree.
    Node* decode(TreeNode* root) {

        if(!root) return NULL;
        Node* head = new Node(root->val, {});
        TreeNode*cur = root->left;
        while (cur){
            head->children.push_back(decode(cur));
            cur = cur->right;

        }
        return head;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(root));

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}