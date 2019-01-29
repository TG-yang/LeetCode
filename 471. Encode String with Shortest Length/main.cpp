#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string encode(string s) {
        int n = s.size();
        vector<vector<string>> dp(n + 1, vector<string>(n + 1));
        for(int i = 0; i < n; ++i){
            dp[i][i + 1].push_back(s[i]);
        }

        for(int k = 2; k <= n; ++k){
            for(int i = 0, j = k; j <= n; ++i, ++j){
                dp[i][j] = dp[i][j - 1] + dp[j - 1][j];

                for(int m = i + 1; m < j; ++m){
                    string tmp = dp[i][m] + dp[m][j];
                    if(tmp.size() < dp[i][j].size())
                        dp[i][j] = tmp;
                }
                int len = j - i;
                string sub = s.substr(i, len);
                int pos = (sub + sub).find(sub, 1);
                if(pos < len){
                    string tmp = to_string(len / pos) + "[" + dp[i][i + pos] + "]";
                    if(tmp.size() < dp[i][j].size())
                        dp[i][j] = tmp;
                }
            }
        }
        return dp[0][n];
    }
};


class Solution {
public:
    string encode(string s) {
        int n = s.size();
        vector<vector<string>> dp(n + 1, vector<string>(n + 1));
        for (int i = 0; i < n; i++) {
            dp[i][i + 1].push_back(s[i]);
        }
        for (int k = 2; k <= n; k++) {
            for (int i = 0, j = k; j <= n; i++, j++) {
                dp[i][j] = dp[i][j - 1] + dp[j - 1][j];
                for (int m = i + 1; m < j; m++) {
                    string tmp = dp[i][m] + dp[m][j];
                    if (tmp.size() < dp[i][j].size()) {
                        dp[i][j] = tmp;
                    }
                }
                int len = j - i;
                string sub = s.substr(i, len);
                int r = (sub + sub).find(sub, 1);
                if (r < len) {
                    string tmp = to_string(len / r) + "[" + dp[i][i + r] + "]";
                    if (tmp.size() < dp[i][j].size()) {
                        dp[i][j] = tmp;
                    }
                }
            }
        }
        return dp[0][n];
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}