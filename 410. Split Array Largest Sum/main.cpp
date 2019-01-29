#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int len = nums.size();
        vector<long long>sum(len,0);
        vector<vector<long long>> dp(m,vector<long long>(len,0));
        sum[0] = nums[0];

        for(int i = 1; i < len; ++i){
            sum[i] = sum[i - 1] + nums[i];
        }

        for(int i = 0; i < m; ++i){
            for(int j = 0; j < len; ++j){
                dp[i][j] = i == 0 ? sum[j] : dp[i - 1][j];
                if(i > 0){
                    for(int k = j - 1; k >= 0; --k){
                        dp[i][j] = min(dp[i][j], max(dp[i - 1][k], sum[j] - sum[k]));
                    }
                }
            }
        }

        return dp[m - 1][len - 1];
    }
};

class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int len = nums.size();
        vector<long long> sum(len, 0);
        vector<vector<long long> > dp(m, vector<long long>(len, 0));
        sum[0] = nums[0];

        for(int i = 1; i < len; i++)
            sum[i] = sum[i - 1] + nums[i];

        for(int i = 0; i < m; i++){
            for(int j = 0; j < len; j++){
                dp[i][j] = i == 0 ? sum[j] : dp[i - 1][j];
                if(i > 0){
                    for(int k = j - 1; k >= 0; k--){
                        dp[i][j] = min(dp[i][j], max(dp[i - 1][k], sum[j] - sum[k]));
                    }
                }
            }
        }

        return dp[m - 1][len - 1];
    }
};




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}