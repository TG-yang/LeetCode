#include <iostream>
#include <vector>
#include <unordered_set>
#include <map>
#include <list>

using namespace std;

class TNode {
public:
    int val;
    unordered_set<TNode*> neighbours;
    TNode(int val){
        this->val = val;
    }
};

class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<pair<int, int>>& edges) {
        map<int,TNode*> val_node;

        for(int i = 0; i < n; ++i){
            TNode*tmp = new TNode(i);
            val_node[i] = tmp;
        }

        for(int i = 0; i < edges.size(); ++i){
            pair<int,int>pp = edges[i];
            val_node[pp.first]->neighbours.insert(val_node[pp.second]);
            val_node[pp.second]->neighbours.insert(val_node[pp.first]);
        }

        map<int,TNode*>::iterator it;

        while(val_node.size() > 2){

            // obtain all leaves in current graph;
            list<TNode*>listLeaves;
            for(it = val_node.begin(); it != val_node.end(); ++it){

                if(it->second->neighbours.size() == 1)
                    listLeaves.push_back(it->second);
            }

            // remove all leaves
            list<TNode*>::iterator list_it;
            for(list_it = listLeaves.begin(); list_it != listLeaves.end(); ++list_it){
                TNode*tempTNode = (*(*list_it)->neighbours.begin());
                tempTNode->neighbours.erase(*list_it);
                (*list_it)->neighbours.erase(tempTNode);
                val_node.erase((*list_it)->val);
            }
        }

        vector<int> res;
        for(it = val_node.begin(); it != val_node.end(); ++it)
            res.push_back(it->first);

        return res;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}