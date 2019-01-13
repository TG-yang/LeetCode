#include <iostream>
#include <vector>

using namespace std;

class NumMatrix {
private:
    vector<vector<int>>myMaxtrix;
public:
    NumMatrix(vector<vector<int>> matrix) {

        if(matrix.size() == 0 || matrix[0].size() == 0)
            return;

        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0; i < m; ++i){

            vector<int> row;
            int sumRow = 0;
            for(int j = 0; j < n; ++j){

                sumRow += matrix[i][j];
                if(i == 0)
                    row.push_back(sumRow);
                else{
                    row.push_back(sumRow + myMaxtrix[i - 1][j]);
                }
            }
            myMaxtrix.push_back(row);
        }
    }

    void update(int row, int col, int val) {
        int i = row, j = col,temp = myMaxtrix[row][col];

        if(row - 1 >= 0 && j - 1 >= 0){
            temp = temp - myMaxtrix[i - 1][j] - myMaxtrix[i][j - 1] + myMaxtrix[i - 1][j - 1];
        }else if(row - 1 >= 0 && j - 1 < 0){
            temp = temp - myMaxtrix[i - 1][j];
        }else if(row - 1 < 0 && j - 1 >= 0){
            temp = temp - myMaxtrix[i][j - 1];
        }else{
            temp = myMaxtrix[row][j];
        }

        for(i = row; i < myMaxtrix.size(); ++i){
            for(j = col; j < myMaxtrix[0].size(); ++j){

                myMaxtrix[i][j] -= temp;
                myMaxtrix[i][j] += val;
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {

        int result = 0;

        if(row1 == 0 && col1 == 0){
            result = myMaxtrix[row2][col2];
        }else if(row1 != 0 && col1 == 0){
            result = myMaxtrix[row2][col2] - myMaxtrix[row1 - 1][col2];
        }else if(row1 == 0 && col1 != 0){
            result = myMaxtrix[row2][col2] - myMaxtrix[row2][col1 - 1];
        }else{
            result = myMaxtrix[row2][col2] - myMaxtrix[row1 - 1][col2] - myMaxtrix[row2][col1 - 1] + myMaxtrix[row1 - 1][col1 - 1];
        }

        return result;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix obj = new NumMatrix(matrix);
 * obj.update(row,col,val);
 * int param_2 = obj.sumRegion(row1,col1,row2,col2);
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}