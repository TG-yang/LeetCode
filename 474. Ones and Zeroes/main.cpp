#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        int cnt0 = 0, cnt1 = 0;

        for(auto str : strs){
            cnt1 = 0, cnt0 = 0;
            for(auto c : str){
                if(c == '1')
                    cnt1++;
                else
                    cnt0++;
            }

            for(int i = m; i >= cnt0; --i){
                for(int j = n; j >= cnt1; --j){
                    dp[i][j] = max(dp[i][j], dp[i - cnt0][j - cnt1] + 1);
                }
            }
        }

        return dp[m][n];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}