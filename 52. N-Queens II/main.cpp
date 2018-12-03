#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int totalNQueens(int n) {
        int result = 0;
        vector<int>pos(n, -1);
        NQueens(pos,0,result);
        return result;
    }

    void NQueens(vector<int>&pos, int row, int&result){
        int n = pos.size();
        if(n == row) {
            ++result;
            return;
        }
        else{
            for(int col = 0; col < n; ++col){
                if(isValid(pos, col, row)){
                    pos[row] = col;
                    NQueens(pos, row + 1, result);
                    pos[row] = -1;
                }
            }
        }
    }

    bool isValid(vector<int>&pos,int col, int row){
        for(int i = 0; i < row; ++i){
            if(pos[i] == col || abs(row - i) == abs(pos[i] - col))
                return false;
        }
        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}