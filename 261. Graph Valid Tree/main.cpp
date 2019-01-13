#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
private:
    unordered_map<int,vector<int>>hash;

public:
    bool validTree(int n, vector<pair<int, int>>& edges) {

        for(auto val : edges){
            hash[val.first].push_back(val.second);
            hash[val.second].push_back(val.first);
        }
        vector<bool> visited(n,false);
        if(!helper(hash,0,visited,-1))
            return false;

        for(auto item : visited){
            if(!item)
                return false;
        }

        return true;
    }

private:
    bool helper(unordered_map<int, vector<int>>& graph, int node, vector<bool>& visited, int parent){

        if(visited[node])
            return false;
        visited[node] = true;

        for(auto val : graph[node]){

            if(val != parent){
                if(!helper(graph,val,visited,node))
                    return false;
            }
        }

        return true;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}