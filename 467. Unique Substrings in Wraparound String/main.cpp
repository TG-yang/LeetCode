#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findSubstringInWraproundString(string p) {
        vector<int>dp;
        int len = 0;
        int result = 0;
        for(int i = 0;i < 26; ++i)
            dp.push_back(0);

        for(int i = 0; i < p.size(); ++i){
            if(i > 0 && ((p[i] - p[i - 1]) == 1 || (p[i] - p[i - 1]) == 25)){
                ++len;
            }else{
                len = 1;
            }
            dp[p[i] - 'a'] = max(len, dp[p[i] - 'a']);
        }

        for(auto d : dp)
            result += d;
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}