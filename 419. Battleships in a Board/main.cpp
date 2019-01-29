#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<vector<int>> direction{{1,0},{-1,0},{0,1},{0,-1}};
    vector<vector<bool>> isVaild;
public:
    int countBattleships(vector<vector<char>>& board) {

        if(board.empty())
            return 0;

        int row = board.size();
        int col = board[0].size();
        isVaild.resize(row,vector<bool>(col,false));
        int count = 0;

        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){

                if(board[i][j] == 'X' && isVaild[i][j] == false){
                    ++count;
                    helper(board,isVaild,direction,row,col,i,j);
                }
            }
        }

        return count;
    }

private:
    void helper(vector<vector<char>>&board, vector<vector<bool>>&isValid,  vector<vector<int>>direction, int row, int col, int i, int j){

        if(i >= row || i < 0 || j >= col || j < 0 || isValid[i][j] || board[i][j] == '.') return;
        isValid[i][j] = true;

        for(auto dir : direction){
            int newx = i + dir[0], newy = j + dir[1];
            helper(board,isValid,direction,row,col,newx,newy);
        }

        return;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}