#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        if(s.size() == 0 || s[0] == '0')
            return 0;

        vector<int>dp(s.size() + 1, 0);
        dp[0] = 1;
        dp[1] = 1;

        for(int i = 1; i < s.size(); ++i){
            int tmp = (int)atoi(s.substr(i - 1, 2).c_str()); //c_str()函数返回一个指向正规C字符串的指针常量
            if(tmp >= 10 && tmp <= 26)
                dp[i + 1] += dp[i - 1];
            if(tmp % 10 != 0)
                dp[i + 1] += dp[i];
        }
        return dp[s.size()];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}