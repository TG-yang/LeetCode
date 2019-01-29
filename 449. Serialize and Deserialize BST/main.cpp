#include <iostream>
#include <sstream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return " #";
        string res = " " + to_string(root->val);

        return res + serialize(root->left) + serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream iss(data);

        return helper(iss);
    }

private:

    TreeNode* helper(istringstream&iss){

        string str;
        iss >> str;
        if(str == "#")
            return NULL;
        TreeNode* root = new TreeNode(stoi(str));
        root->left = helper(iss);
        root->right = helper(iss);

        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}