#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i = 0; i<grid.size(); i++)
            for(int j = 0; j<grid[0].size(); j++)
                if(grid[i][j] == '1') help(grid, i, j, count++);
        return count;
    }


    void help(vector<vector<char>>& grid, int i, int j, int count){
        if(i == grid.size() || i < 0 || j == grid[0].size() || j < 0 || grid[i][j] != '1') return;//出口条件：越过了边界或者                                                                                              //元素值不为1
        grid[i][j] = '2' + count;//用当前已经找到的岛的个数重新标记
        help(grid, i+1, j, count);
        help(grid, i, j+1, count);
        help(grid, i-1, j, count);
        help(grid, i, j-1, count);
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}