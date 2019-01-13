#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {

        int m = matrix.size();
        if(m == 0)
            return 0;

        int n = matrix[0].size();
        int max1 = 1;
        //创建dp数组，记录每个位置的最大路径长度，初始化为0
        vector<vector<int>> dp(m, vector<int>(n, 0));

        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){

                max1 = max(max1,helper(i,j,matrix,dp));
            }
        }

        return max1;
    }

private:

    int helper(int r,int c,vector<vector<int>>& matrix, vector<vector<int>>& dp){

        if(dp[r][c] != 0){//不为0表示已经计算过
            return dp[r][c];
        }
        int nr = matrix.size();
        int nc = matrix[0].size();
        int max = 1;
        if(r > 0 && matrix[r][c] < matrix[r-1][c]){
            max = 1 + helper(r - 1, c, matrix, dp);
        }
        if(c > 0 && matrix[r][c] < matrix[r][c-1]){
            max = std::max(max, 1 + helper(r, c - 1, matrix, dp));
        }
        if(r < nr - 1 && matrix[r][c] < matrix[r+1][c]){
            max = std::max(max, 1 + helper(r + 1, c, matrix, dp));
        }
        if(c < nc - 1 && matrix[r][c] < matrix[r][c+1]){
            max = std::max(max, 1 + helper(r, c + 1, matrix, dp));
        }
        dp[r][c] = max;//记录
        return max;
    }


};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}