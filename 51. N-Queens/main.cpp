#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>result;
        vector<int> pos(n, -1); // 用来存储低i 行时Q所在的列。
        int row = 0;
        solveNQueens(pos,row,result);
        return result;
    }

private:
   void solveNQueens(vector<int>&pos, int row, vector<vector<string> >&result){
        int n = pos.size();
        if(row == n){
            vector<string> oneResult(n,string(n,'.'));
            for(int i = 0; i < n; ++i)
                oneResult[i][pos[i]] = 'Q';
            result.push_back(oneResult);
            return;
        }else{
            for(int col = 0; col < n; ++col){
                if(isValid(pos,row,col)){
                    pos[row] = col;
                    solveNQueens(pos, row + 1, result);
                }
            }
        }
    }
   bool isValid(vector<int>&pos, int row, int col){

        for(int i = 0; i < row; ++i){
            if(pos[i] == col || abs(row - i ) == abs(pos[i] - col))
                return false;
        }
        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}