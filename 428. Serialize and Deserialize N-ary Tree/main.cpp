#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;


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

class Codec {
private:
public:

    // Encodes a tree to a single string.
    string serialize(Node* root) {

        string data;
        mySerialize(root,data);
        return data;
    }

    // Decodes your encoded data to tree.
    Node* deserialize(string data) {
        istringstream iss(data);
        return myDeserialize(iss);
    }

private:
    void mySerialize(Node * root, string&data){
        if(!root)
            data += "#";
        else{
            data += to_string(root->val) + " " + to_string(root->children.size()) + " ";
            for(auto child : root->children){
                mySerialize(child, data);
            }
        }
    }

    Node* myDeserialize(istringstream&iss){
        string val = "", size = "";
        iss >> val;
        if(val == "#")
            return NULL;
        iss >> size;

        Node* node = new Node(stoi(val), {});
        for(int i = 0; i < stoi(size); ++i){
            node->children.push_back(myDeserialize(iss));
        }

        return node;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}