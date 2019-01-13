#include <iostream>
#include <vector>

using namespace std;

class NumMatrix {
private:
    vector<vector<int>> result;
public:
    NumMatrix(vector<vector<int>> matrix) {

        int m = matrix.size();

        for(int i = 0; i < m; ++i){

            vector<int> oneResult;
            int sum = 0;
            for(int j = 0; j < matrix[i].size(); ++j){
                sum += matrix[i][j];
                if(i == 0)
                    oneResult.push_back(sum);
                else{
                    oneResult.push_back(sum + this->result[i - 1][j]);
                }
            }
            this->result.push_back(oneResult);
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {

        int res = 0;

        if(row1 != 0 && col1 != 0){
            res = result[row2][col2] + result[row1 - 1][col1 - 1] - result[row2][col1 - 1] - result[row1 - 1][col2];
        }else if(row1 != 0 && col1 == 0){
            res = result[row2][col2] - result[row1 - 1][col2];
        }else if(row1 == 0 && col1 != 0){
            res = result[row2][col2] - result[row2][col1 - 1];
        }else{
            res = result[row2][col2];
        }

        return res;
    }
};




/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix obj = new NumMatrix(matrix);
 * int param_1 = obj.sumRegion(row1,col1,row2,col2);
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}