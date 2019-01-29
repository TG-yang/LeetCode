#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        queue<vector<int>>q;
        vector<vector<int>>direction = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,1},{1,0},{1,-1}};
        q.emplace(click);
        while (!q.empty()){
            int row = q.front()[0], col = q.front()[1];
            q.pop();
            if(board[row][col] == 'M'){
                board[row][col] = 'X';
            }else{
                int cnt = 0;
                for(auto dir : direction){
                    int x = row + dir[0], y = col + dir[1];
                    if(x < 0 || y < 0 || x >= board.size() || y >= board[0].size()){
                        continue;
                    }
                    if(board[x][y] == 'M' || board[x][y] == 'X'){
                        ++cnt;
                    }
                }
                if(cnt > 0){
                    board[row][col] = '0' + cnt;
                }else{
                    board[row][col] = 'B';
                    for(auto dir : direction){
                        int x = row + dir[0], y = col + dir[1];
                        if(x < 0 || y < 0 || x >= board.size() || y >= board[0].size()){
                            continue;
                        }
                        if(board[x][y] == 'E'){
                            vector<int>next_click = {x,y};
                            q.emplace(next_click);
                            board[x][y] = 'B';
                        }
                    }
                }
            }
        }
        return board;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}