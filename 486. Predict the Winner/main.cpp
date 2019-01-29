#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        vector<int>sums;
        int n = nums.size();
        sums.push_back(nums[0]);
        for(int i = 1; i < n; ++i){
            sums.push_back(sums.back() + nums[i]);
        }
        vector<vector<int>>dp(n, vector<int>(n, 0));
        for(int i = 0; i < n; ++i){
            dp[i][i] = nums[i];
        }
        for(int i = 1; i < n; ++i){
            for(int j = 0; j + i < n; ++j){
                dp[j][i + j] = max(sums[j + i] - sums[j] + nums[j] - dp[j + 1][i + j], sums[j + i] - sums[j] + nums[j] - dp[j][i + j - 1]);
            }
        }
        return 2*dp[0][n-1]>=sums[n-1];
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}