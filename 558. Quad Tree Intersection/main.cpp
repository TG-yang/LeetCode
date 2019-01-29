#include <iostream>

using namespace std;


class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {}

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};

class Solution {
public:
    Node* intersect(Node* quadTree1, Node* quadTree2) {
        if(quadTree1->isLeaf){
            return quadTree1->val ? quadTree1 : quadTree2;
        }
        if(quadTree2->isLeaf){
            return quadTree2->val ? quadTree2 : quadTree1;
        }
        Node* node = new Node(false,false,
                            intersect(quadTree1->topLeft,quadTree2->topLeft),
                            intersect(quadTree1->topRight,quadTree2->topRight),
                            intersect(quadTree1->bottomLeft,quadTree2->bottomLeft),
                            intersect(quadTree1->bottomRight,quadTree2->bottomRight));
        if(node->topLeft->isLeaf && node->topRight->isLeaf && node->bottomLeft->isLeaf && node->bottomRight->isLeaf
            && node->topLeft->val == node->topRight->val && node->topLeft->val == node->bottomRight->val
            && node->topLeft->val == node->bottomLeft->val){
            node->isLeaf = true;
            node->val = node->topLeft->val;
        }

        return node;
    }
};




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}