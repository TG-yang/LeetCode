#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {

        int count = 0;
        int row = grid.size();
        int col = grid[0].size();

        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                if(grid[i][j]){
                    count += 4;
                    if(i > 0 && grid[i - 1][j])
                        count -= 1;
                    if(i < row - 1 && grid[i + 1][j])
                        count -= 1;
                    if(j > 0 && grid[i][j - 1])
                        count -= 1;
                    if(j < col - 1 && grid[i][j + 1])
                        count -= 1;
                }
            }
        }

        return count;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}