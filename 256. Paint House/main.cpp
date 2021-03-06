#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minCost(vector<vector<int>>& costs) {
        if(costs.empty() || costs[0].size() == 0)
            return 0;

        vector<vector<int>>dp = costs;
        for(int i = 1; i < dp.size(); ++i){
            for(int j = 0; j < 3; ++j){

                dp[i][j] += min(dp[i - 1][(j + 1) % 3],dp[i - 1][(j + 2) % 3]);
            }
        }

        return min(min(dp.back()[0], dp.back()[1]), dp.back()[2]);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}