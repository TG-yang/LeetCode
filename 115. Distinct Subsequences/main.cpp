#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int numDistinct(string s, string t) {
        if(s.empty() || t.empty())
            return 0;
        else if(s.size() < t.size())
            return 0;
        else{
            int ls = s.size(), lt = t.size();
            vector<vector<int> > dp(ls + 1, vector<int>(lt + 1, 0));

            for(int i = 0; i < ls; ++i)
                dp[i][0] = 1;
            for(int i = 1; i <= ls; ++i){
                for(int j = 0; j <= lt; ++j){
                    dp[i][j] += dp[i -1][j];
                    if(s[i - 1] == t[j - 1]){
                        dp[i][j] += dp[i - 1][j - 1];
                    }
                }
            }
            return dp[ls][lt];
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}