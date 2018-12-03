#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size() == 0)
            return vector<int>();

        int row = matrix.size(), col = matrix[0].size();
        vector<vector<bool>> boolMatrix(row,vector<bool>(col,false));
        int direct = 0, i = 0, j = 0;
        vector<int> result;
        while(i < row && j < col && i >= 0 && j >= 0){
            if(boolMatrix[i][j])
                break;
            boolMatrix[i][j] = true;
            result.push_back(matrix[i][j]);

            switch (direct){
                case 0:
                    if(j == (col - 1) || boolMatrix[i][j + 1] == true){
                        direct = 1;
                        ++i;
                    }else
                        ++j;
                    break;
                case 1:
                    if(i == (row - 1) || boolMatrix[i + 1][j] == true) {
                        direct = 2;
                        --j;
                    } else
                        ++i;
                    break;
                case 2:
                    if(j == 0 || boolMatrix[i][j - 1] == true){
                        direct = 3;
                        --i;
                    }else
                        --j;
                    break;
                case 3:
                    if(i == 0 || boolMatrix[i - 1][j] == true){
                        direct = 0;
                        ++j;
                    }else
                        --i;
                    break;
            }
        }
        return result;
    }
};

int main() {

    Solution*s;
    vector<vector<int>>matrix{{1}};
    s->spiralOrder(matrix);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}