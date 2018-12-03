#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0);
    }

    bool solve(vector<vector<char>>&board,int position){
        if(position == 81)
            return true;
        int row = position / 9;
        int col = position % 9;
        if(board[row][col] == '.'){
            for(int i = 1; i <= 9; ++i){
                board[row][col] = '0' + i;
                if(check(board,position)){
                    if(solve(board,position + 1))
                        return true;
                }
                board[row][col] = '.';
            }
        }else{
            if(solve(board,position + 1))
                return true;
        }
        return false;
    }

    bool check(vector<vector<char>>&board,int position){
        int row = position / 9;
        int col = position % 9;
        int subBoard;
        if(row >= 0 && row <= 2){
            if(col >= 0 && col <= 2)
                subBoard = 0;
            else if(col >= 3 && col <= 5)
                subBoard = 1;
            else
                subBoard = 2;
        }else if(row >= 3 && row <= 5){
            if(col >= 0 && col <= 2)
                subBoard = 3;
            else if(col >= 3 && col <= 5)
                subBoard = 4;
            else
                subBoard = 5;
        }else{
            if(col >= 0 && col <= 2)
                subBoard = 6;
            else if(col >= 3 && col <= 5)
                subBoard = 7;
            else
                subBoard = 8;
        }
        for(int i = 0 ; i < 9; ++i){
            if(i != col && board[row][i] ==  board[row][col])
                return false;
            if(i != row && board[i][col] == board[row][col])
                return  false;
            int r = (subBoard / 3) * 3 + i / 3;
            int c = (subBoard % 3) * 3 + i % 3;
            if((r != row || c != col) && board[r][c] == board[row][col])
                return false;
        }
        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}