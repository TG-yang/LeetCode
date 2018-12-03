#include <iostream>
#include <queue>

using namespace std;


struct TreeLinkNode {
    int val;
    TreeLinkNode *left, *right, *next;
    TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};


class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(!root) return;
        TreeLinkNode*cur;
        while(root->left){
            cur = root;
            while(cur){
                cur->left->next = cur->right;
                if(cur->next)
                    cur->right->next = cur->next->left;
                cur = cur->next;
            }
            root = root->left;
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}