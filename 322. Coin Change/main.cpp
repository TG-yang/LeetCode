#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    const int INF = 0x7ffffffe;
public:
    int coinChange(vector<int>& coins, int amount) {

        sort(coins.begin(),coins.end());
        int result = helper(coins,amount);

        if(result == -1)
            return -1;
        else
            return result;
    }

    int helper(vector<int>&coins,int n){

        if(n == 0)
            return 0;
        if(coins.size() == 0)
            return -1;

        vector<int>dp(n + 1, 0);
        for(int i = 1; i <= n; ++i){
            int myMin = INF;
            for(int j = 0; j < coins.size(); ++j){
                if(i >= coins[j] && dp[i - coins[j]] != -1){
                    myMin = min(myMin,dp[i - coins[j]] + 1);
                }
            }
            dp[i] = myMin == INF ? -1 : myMin;
        }

        return dp[n];
    }
};

class Solution {
private:
    const int INF = 0x7ffffffe;
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());

        int result = count(amount, coins);
        if(result == -1){
            return -1;
        }
        else{
            return result;
        }
    }

    int count(int n,vector<int>& coins){
        if (n == 0){
            return 0;
        }
        if (coins.size() == 0){
            return -1;
        }

        vector<int> dp(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            int min2  = INF;
            for (int j = 0; j < coins.size(); j++) {
                if (i >= coins[j] && dp[i - coins[j]] != -1){
                    min2 = min(min2, dp[i - coins[j]] + 1);
                }
            }
            dp[i] = min2 == INF ? -1 : min2;
        }
        return dp[n];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}