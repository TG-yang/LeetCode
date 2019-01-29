#include <iostream>
#include <vector>

using namespace std;


class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root)
            return 0;
        int maxDeep = 1;
        helper(root,maxDeep,1);
        return maxDeep;
    }

private:
    void helper(Node* root, int&MaxDeep, int curDepth){
        if(root->children.size() == 0)
            MaxDeep = max(MaxDeep, curDepth);

        for(int i = 0; i < root->children.size(); ++i){
            helper(root->children[i], MaxDeep, curDepth + 1);
        }
        return;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}