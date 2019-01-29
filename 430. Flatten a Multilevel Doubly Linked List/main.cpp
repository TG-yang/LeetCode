#include <iostream>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node() {}

    Node(int _val, Node* _prev, Node* _next, Node* _child) {
        val = _val;
        prev = _prev;
        next = _next;
        child = _child;
    }
};

class Solution {
public:
    Node* flatten(Node* head) {
        Node* root = head;
        while (head){
            Node*next = head->next;
            if(head->child){
                Node* child = flatten(head->child);
                head->child = NULL;
                head->next = child;
                child->prev = head;
                while (head->next) head = head->next;
            }

            if(next != NULL){
                head->next = next;
                next->prev = head;
            }
            head = head->next;
        }

        return root;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}