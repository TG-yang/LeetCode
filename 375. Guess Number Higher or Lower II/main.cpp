#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int getMoneyAmount(int n) {
        if(n == 0)
            return 0;

        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        return helper(dp,1,n);
    }

private:
    int helper(vector<vector<int>> &dp,int left,int right){

        if(left >= right) return 0;
        if(dp[left][right])
            return dp[left][right];
        int result = INT_MAX;
        for(int i = left; i <= right; ++i){

            result = min(result,i + max(helper(dp,left,i - 1),helper(dp,i + 1,right)));
        }
        return dp[left][right] = result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}