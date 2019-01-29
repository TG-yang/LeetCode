#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findBlackPixel(vector<vector<char>>& picture, int N) {
        if(picture.size() == 0 || picture[0].size() == 0)
            return 0;
        int row = picture.size(), col = picture[0].size(), res = 0, k;
        vector<int>rowNum(row,0);
        vector<int>colNum(col,0);
        vector<string>rowStr(row,"");

        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                rowStr[i] += picture[i][j];
                if(picture[i][j] == 'B'){
                    rowNum[i]++;
                    colNum[j]++;
                }
            }
        }
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                if(rowNum[i] == N && colNum[j] == N){
                    for(k = 0; k < row; ++k){
                        if(picture[k][j] == 'B'){
                            if(rowStr[k] != rowStr[i])
                                break;
                        }
                    }
                    if(k == row){
                        res += colNum[j];
                        colNum[j] = 0;
                    }
                }
            }
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}