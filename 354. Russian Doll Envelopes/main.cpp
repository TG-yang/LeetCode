#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxEnvelopes(vector<pair<int, int>>& envelopes) {
        vector<int>dp(envelopes.size() + 1,1);
        sort(envelopes.begin(),envelopes.end());
        int result = 0;
        for(int i = 0; i < envelopes.size(); ++i){
            for(int j = 0; j < envelopes.size(); ++j){

                if(envelopes[i].first > envelopes[j].first && envelopes[i].second > envelopes[j].second){
                    dp[i] = max(dp[i],dp[j] + 1);
                }
            }
            result = max(result,dp[i]);
        }
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}