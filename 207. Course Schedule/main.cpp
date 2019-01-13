#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {

        if(numCourses == 0 || prerequisites.size() == 0)
            return true;
        graph = vector<vector<int>>(numCourses);
        vis = vector<int>(numCourses,0); //no visit

        for(auto i : prerequisites){

            graph[i.first].push_back(i.second);
        }

        for(int i = 0; i < numCourses; ++i){

            if(vis[i] == 0 && !dfs(i))
                return false;
        }

        return true;
    }

private:
    vector<int>vis;
    vector<vector<int>>graph;

    bool dfs(int u){

        vis[u] = 1; // visting
        for(auto i : graph[u]){

            if(vis[i] == 1)
                return false;
            if(!dfs(i))
                return false;
        }

        vis[u] = 2; //visited

        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}