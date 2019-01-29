#include <iostream>
#include <vector>
#include <queue>

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
    vector<vector<int>> levelOrder(Node* root) {
        if(root == NULL) return {};
        vector<vector<int>> result;
        queue<Node*>queue1;
        queue1.push(root);

        while (!queue1.empty()){

            int size = queue1.size();
            int i = 0;
            vector<int>oneLevel;
            while (i < size){
                Node* node = queue1.front();
                queue1.pop();
                oneLevel.push_back(node->val);
                for(auto item : node->children){
                    queue1.push(item);
                }
                ++i;
            }
            result.push_back(oneLevel);
        }

        return result;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}