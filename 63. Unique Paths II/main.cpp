#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        vector<vector<int>>result(m,vector<int>(n,1));
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(obstacleGrid[i][j] == 1)
                    result[i][j] = 0;
            }
        }

        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(result[i][j] != 0){
                    if(i == 0 && j >= 1) result[i][j] = result[i][j - 1];
                    if(j == 0 && i >= 1) result[i][j] = result[i - 1][j];
                    if(i >= 1 && j >= 1) result[i][j] = result[i][j - 1] + result[i - 1][j];
                }
            }
        }
        return result[m - 1][n - 1];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}