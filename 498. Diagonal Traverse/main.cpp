#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        if(matrix.empty())
            return {};

        int row = matrix.size();
        int col = matrix[0].size();
        int cnt = 0, i = 0, j = 0, d = 1;
        vector<int>result;
        int num = row * col;
        while (cnt < num){
            result.push_back(matrix[i][j]);
            ++cnt;
            i -= d;
            j += d;
            if(i == row){
                i = row - 1;
                d = -d;
                j += 2;
            }
            if(j == col){
                j = col - 1;
                d = -d;
                i += 2;
            }
            if(i < 0){
                i = 0;
                d = -d;
            }
            if(j < 0){
                j = 0;
                d = -d;
            }
        }
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}