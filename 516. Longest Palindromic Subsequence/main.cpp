#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        vector<vector<int>> dp(s.size(),vector<int>(s.size(),0));
        for(int i = 0; i < s.size(); ++i){
            dp[i][i] = 1;
        }
        for(int i = 0; i < s.size() - 1; ++i){
            if(s[i] == s[i + 1])
                dp[i][i + 1] = 2;
            else
                dp[i][i + 1] = 1;
        }

        for(int len = 3; len <= s.size(); ++len){
            for(int j = 0; j < s.size() - len + 1; ++j){
                int k = j + len - 1;
                if(s[j] == s[k])
                    dp[j][k] = 2 + dp[j + 1][k - 1];
                else
                    dp[j][k] = max(dp[j][k - 1], dp[j + 1][k]);
            }
        }

        return dp[0][s.size() - 1];
    }
};

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int len = s.length();
        vector<vector<int> > dp(len, vector<int>(len, 0));
        for(int i = 0; i < len; i++)
            dp[i][i] = 1;
        for(int i = 0; i < len - 1; i++){
            if(s[i] == s[i + 1])
                dp[i][i + 1] = 2;
            else
                dp[i][i + 1] = 1;
        }
        for(int l = 3; l <= len; l++){
            for(int j = 0; j < len - l + 1; j++){
                int k = j + l - 1;
                if(s[j] == s[k])
                    dp[j][k] = 2 + dp[j + 1][k - 1];
                else
                    dp[j][k] = max(dp[j][k - 1], dp[j + 1][k]);
            }
        }
        return dp[0][len - 1];
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}