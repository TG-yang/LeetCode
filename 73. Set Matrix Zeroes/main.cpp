#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>>result(row,vector<int>(col,0));

        for(int i = 0; i < row; ++i){
            vector<int>::iterator it = find(matrix[i].begin(),matrix[i].end(),0);
            for(int j = 0; j < col; ++j){
                if(it !=  matrix[i].end() || matrix[i][col - 1] == 0){
                    break;
                }else{
                    result[i][j] = matrix[i][j];
                }
            }
        }
        for(int j = 0; j < col; ++j){
            for(int i = 0; i < row; ++i){
                if(matrix[i][j] == 0) {
                    for(int n = 0; n < row; ++n)
                        result[n][j] = 0;
                }
            }
        }
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j)
                matrix[i][j] = result[i][j];
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}