#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    bool hasPath(vector<vector<int>>& maze, vector<int>& start, vector<int>& destination) {
        if(maze.empty() || maze[0].empty()) return true;
        int row = maze.size(), col = maze[0].size();
        vector<pair<int,int>> direction = {{1,0}, {0,1}, {-1,0}, {0,-1}};
        vector<vector<bool>>visited(row, vector<bool>(col, false));
        queue<pair<int,int>>queue1;
        queue1.push({start[0],start[1]});
        visited[start[0]][start[1]] = true;

        while (!queue1.empty()){
            pair<int,int>curPoint = queue1.front();queue1.pop();
            if(curPoint.first == destination[0] && curPoint.second == destination[1])
                return true;

            for(auto dir : direction){
                int x = curPoint.first ;
                int y = curPoint.second;
                while(x >= 0 && x < row && y >= 0 && y < col && maze[x][y] == 0){
                    x += dir.first; y += dir.second;
                }
                x -= dir.first; y -= dir.second;
                if(!visited[x][y]){
                    visited[x][y] = true;
                    queue1.push({x,y});
                }
            }
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}