#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

class Solution {
public:
    int countComponents(int n, vector<pair<int, int>>& edges) {

        map<int,set<int>>hash;

        for(auto& item : edges){
            hash[item.first].insert(item.second);
            hash[item.second].insert(item.first);
        }

        int count = 0;
        vector<int> visited(n,0);

        for(int i = 0; i < n; ++i){

            if(visited[i] == 0){
                ++count;
                helper(hash,visited,i);
            }
        }

        return count;
    }

private:

    void helper(map<int,set<int>>&hash,vector<int>&visited,int node){

        if(visited[node] == 0){

            visited[node] = 1;
            set<int>set1 = hash[node];

            for(auto item : set1){

                if(visited[item] == 0){
                    helper(hash,visited,item);
                }
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}