#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(i == 0 && j >= 1) grid[i][j] += grid[i][j - 1];
                if(j == 0 && i >= 1) grid[i][j] += grid[i - 1][j];
                if(i > 0 && j > 0) grid[i][j] += min(grid[i - 1][j],grid[i][j - 1]);
            }
        }
        return grid[m - 1][n - 1];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}