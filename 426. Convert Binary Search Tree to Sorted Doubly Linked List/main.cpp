#include <iostream>

using namespace std;


class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};

class Solution {
    Node *prev;
public:
    Node* treeToDoublyList(Node* root) {
        if(root == NULL)
            return NULL;
        Node* head = new Node(0,NULL,NULL);
        prev = head;
        inorder(root);

        prev->right = head->right;
        head->right->left = prev;

        return head->right;
    }

private:
    void inorder(Node*root){
        if(root == NULL)
            return;
        inorder(root->left);
        prev->right = root;
        root->left = prev;
        prev = root;
        inorder(root->right);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}