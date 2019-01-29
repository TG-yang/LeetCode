#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string findShortestWay(vector<vector<int>>& maze, vector<int>& ball, vector<int>& hole) {
        pair<string,int>res = {"impossible",INT_MAX};
        return helper(maze, ball[0], ball[1], hole, 0, 0, 0, "", res);
    }

private:
    string helper(vector<vector<int>>&maze, int row, int col, vector<int>&hole, int steps, int d_row, int d_col, const string &path, pair<string,int>&res){

        if(steps < res.second){
            if(d_row != 0 || d_col != 0){
                while((row + d_row) >= 0 && (row + d_row) < maze.size() && (col + d_col) >= 0 && (col + d_col) < maze[0].size() &&
                      maze[row + d_row][col + d_col] != 1){
                    row += d_row;
                    col += d_col;
                    ++steps;
                    if(row == hole[0] && col == hole[1] && steps < res.second)
                        res = {path,steps};
                }
            }
            if(maze[row][col] == 0 || maze[row][col] > steps + 2){
                maze[row][col] = steps + 2; // '1' is for the walls. We change the maze data when performing DFS
                if(d_row == 0){
                    helper(maze, row, col, hole, steps, 1, 0, path + "d", res);
                }
                if(d_col == 0){
                    helper(maze, row, col, hole, steps, 0, 1, path + "r", res);
                }
                if(d_col == 0){
                    helper(maze, row, col, hole, steps, 0, -1, path + "l", res);
                }
                if(d_row == 0){
                    helper(maze, row, col, hole, steps, -1, 0, path + "u", res);
                }
            }
        }
        return res.first;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}