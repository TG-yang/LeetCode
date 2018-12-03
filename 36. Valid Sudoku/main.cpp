#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int>count;
        int len = board.size();
        //根据数独游戏的规则，需要进行三次检验（按行、按列、按照3*3块）
        for(int i = 0; i < len; ++i){
            count.assign(9,0);
            for(int j = 0; j < len; ++j){
                if(board[i][j] != '.'){
                    int n = board[i][j] - '1';
                    if(count[n] > 0)
                        return false;
                    else
                        ++count[n];
                } else
                    continue;
            }
        }
        for(int j = 0; j < len; ++j){
            count.assign(9,0);
            for(int i = 0; i < len; ++i){
                if(board[i][j] != '.'){
                    int n = board[i][j] - '1';
                    if(count[n] > 0)
                        return false;
                    else
                        ++count[n];
                }else
                    continue;
            }
        }
        for(int i = 0; i < len; i+=3){
            for(int j = 0; j < len; j+=3){
                count.assign(9,0);
                for(int row = i; row < i + 3; ++row){
                    for(int col = j; col < j + 3; ++col){
                        if(board[row][col] != '.'){
                            int n = board[row][col] - '1';
                            if(count[n] > 0)
                                return false;
                            else
                                ++count[n];
                        }
                    }
                }
            }
        }
        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}