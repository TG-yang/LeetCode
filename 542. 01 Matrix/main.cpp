#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//class Solution {
//public:
//    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
//        vector<vector<int>> ret(matrix.size(), vector<int>(matrix[0].size(), 0));
//        for(int i = 0; i < matrix.size(); ++i){
//            for(int j = 0; j < matrix[0].size(); ++j){
//                int len =INT_MAX;
//                helper(matrix,i,j,i,j,len);
//                ret[i][j] = len;
//            }
//        }
//        return ret;
//    }
//
//private:
//    void helper(vector<vector<int>>& matrix, int x, int y, int i, int j, int&len){
//        if(matrix[x][y] == 0){
//            len = min(len, abs(x - i) + abs(y - j));
//            return;
//        }
//        vector<vector<int>>direction = {{1,0},{0,1},{-1,0},{0,-1}};
//        for(auto dir : direction){
//            int newX = x + dir[0];
//            int newY = y + dir[1];
//            if(newX < 0 || newY < 0 || newX >= matrix.size() || newY >= matrix[0].size())
//                continue;
//            helper(matrix,newX,newY,i,j,len);
//        }
//    }
//};

class Solution{
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &matrix){
        if (matrix.size() == 0 || matrix[0].size() == 0)
            return matrix;

        int n;
        int m;
        n = matrix.size();
        m = matrix[0].size();
        int rangeNum = n + m;
        vector<vector<int>> dis(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (matrix[i][j] == 0)
                    dis[i][j] = 0;
                else {
                    int up = (i > 0) ? dis[i - 1][j] : rangeNum;
                    int left = (j > 0) ? dis[i][j - 1] : rangeNum;
                    dis[i][j] = min(left, up) + 1;
                }
            }
        }

        for (int i = n - 1; i >= 0; i--){
            for (int j = m - 1; j >= 0; j--){
                if (matrix[i][j] == 0)
                    dis[i][j] = 0;
                else{
                    int right = (j + 1) < m ? dis[i][j + 1] : rangeNum;
                    int down = (i + 1) < n ? dis[i + 1][j] : rangeNum;
                    dis[i][j] = min(min(right, down) + 1, dis[i][j]);
                }
            }
        }
        return dis;
    }
};



    int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}