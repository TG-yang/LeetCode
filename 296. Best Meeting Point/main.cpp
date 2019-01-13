#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minTotalDistance(vector<vector<int>>& grid) {

        int m = grid.size();
        if(m == 0)
            return 0;
        int n = grid[0].size();
        if(n == 0)
            return 0;

        vector<int> x;
        vector<int> y;
        int res = 0;

        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(grid[i][j] == 1){
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }

        sort(x.begin(),x.end());
        sort(y.begin(),y.end());

        int len = x.size();
        int midX = x[len/2];
        int midY = y[len/2];

        for(int i = 0; i < len; ++i){

            res += (abs(midX - x[i]) + abs(midY - y[i]));
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}