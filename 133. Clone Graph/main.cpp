#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

struct UndirectedGraphNode {
    int label;
    vector<UndirectedGraphNode *> neighbors;
    UndirectedGraphNode(int x) : label(x) {};
};

class Solution {
public:
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        if(!node)
            return NULL;
        unordered_map<UndirectedGraphNode*,UndirectedGraphNode*>ht;
        queue<UndirectedGraphNode*>q;
        q.push(node);
        UndirectedGraphNode* p2 = new UndirectedGraphNode(node->label);
        ht[node] = p2;

        while (!q.empty()){
            UndirectedGraphNode* p1 = q.front();
            q.pop();
            UndirectedGraphNode* p2 = ht[p1];

            for(int i = 0; i < p1->neighbors.size(); ++i){
                UndirectedGraphNode*nb = p1->neighbors[i];
                if(ht.count(nb)){
                    p2->neighbors.push_back(ht[nb]);
                }else{
                    UndirectedGraphNode*temp = new UndirectedGraphNode(nb->label);
                    p2->neighbors.push_back(temp);
                    ht[nb] = temp;
                    q.push(nb);
                }
            }
        }
        return ht[node];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}