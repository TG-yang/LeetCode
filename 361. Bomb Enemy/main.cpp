#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxKilledEnemies(vector<vector<char>>& grid) {

        int result = 0;
        int r = grid.size();
        if(r == 0)
            return result;
        int c = grid[0].size();
        if(c == 0)
            return result;

        vector<vector<int>>map(r,vector<int>(c,0));
        int left = 0, right = 0;
        int top = 0, buttom = 0;

        for(int i = 0; i < r; ++i){
            left = 0; right = 0;
            for(int j = 0; j < c; ++j){

                if(grid[i][j] == '0'){
                    map[i][j] += left;
                }else{
                    left = grid[i][j] == 'E' ? left + 1 : 0;
                }
            }
            for(int j = c - 1; j >= 0; --j){

                if(grid[i][j] == '0'){
                    map[i][j] += right;
                }else{
                    right = grid[i][j] == 'E' ? right + 1 : 0;
                }
            }
        }

        for(int j = 0; j < c; ++j){
            top = 0; buttom = 0;
            for(int i = 0; i < r; ++i){

                if(grid[i][j] == '0'){
                    map[i][j] += top;
                }else{
                    top = grid[i][j] == 'E' ? top + 1 : 0;
                }
            }
            for(int i = r - 1; i >= 0; --i){

                if(grid[i][j] == '0'){
                    map[i][j] += buttom;
                    result = max(result,map[i][j]);
                }else{
                    buttom = grid[i][j] == 'E' ? buttom + 1 : 0;
                }
            }
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}