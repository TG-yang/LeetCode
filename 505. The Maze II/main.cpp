#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

//class Solution {
//public:
//    int shortestDistance(vector<vector<int>>& maze, vector<int>& start, vector<int>& destination) {
//        int Min = INT_MAX;
//        int row = maze.size();
//        int col = maze[0].size();
//        helper(maze,start[0],start[1],0,0,0,Min,destination);
//        return Min == INT_MAX ? -1 : Min;
//    }
//
//private:
//    void helper(vector<vector<int>>& maze, int row, int col, int d_row, int d_col, int steps, int&Min, vector<int>& destination){
//        if(steps < Min){
//            if(d_row != 0 || d_col != 0){
//                while ((row + d_row) >= 0 && (row + d_row) < maze.size() && (col + d_col) >= 0 && (col + d_col) < maze[0].size() &&
//                maze[row + d_row][col + d_col] != 1){
//                    row += d_row;
//                    col += d_col;
//                    ++steps;
//                }
//                if(row == destination[0] && col == destination[1] && Min > steps){
//                    Min = steps;
//                }
//            }
//            if(maze[row][col] == 0 || maze[row][col] > steps + 2){
//                maze[row][col] = steps + 2;
//                if(d_row == 0){
//                    helper(maze,row,col,1,0,steps,Min,destination);
//                }
//                if(d_row == 0){
//                    helper(maze,row,col,-1,0,steps,Min,destination);
//                }
//                if(d_col == 0){
//                    helper(maze,row,col,0,1,steps,Min,destination);
//                }
//                if(d_col == 0){
//                    helper(maze,row,col,0,-1,steps,Min,destination);
//                }
//            }
//        }
//        return;
//    }
//};

class Solution {
public:
    int shortestDistance(vector<vector<int>>& maze, vector<int>& start, vector<int>& destination) {
        vector<vector<int>>direction = {{0,1},{0,-1},{1,0},{-1,0}};
        map<vector<int>,int>visited;
        queue<vector<int>>queue1;
        int ret = INT_MAX;
        queue1.push(start);
        visited[start] = 0;

        while (!queue1.empty()){
            vector<int>pos = queue1.front();
            queue1.pop();
            if(pos == destination){
                ret = min(ret,visited[pos]);
            }else{
                for(int i = 0; i < 4; ++i){
                    vector<int> temp = helper(maze,pos,direction[i]);
                    int length = i <= 1 ? abs(pos[1] - temp[1]) : abs(pos[0] - temp[0]);
                    if(visited.find(temp) == visited.end() || visited[temp] > visited[pos] + length){
                        visited[temp] = visited[pos] + length;
                        queue1.push(temp);
                    }
                }
            }
        }
        return ret == INT_MAX ? -1 : ret;
    }

private:
    vector<int> helper(vector<vector<int>>& maze, vector<int>&start,vector<int>dir){
        int row = maze.size();
        int col = maze[0].size();
        vector<int>new_start = {start[0] + dir[0],start[1] + dir[1]};
        if(new_start[0] < 0 || new_start[0] >= row || new_start[1] < 0 || new_start[1] >= col || maze[new_start[0]][new_start[1]] == 1)
            return start;
        return helper(maze,new_start,dir);
    }
};





int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}