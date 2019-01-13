#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {

        if(nums.size() == 0)
            return {};
        sort(nums.begin(),nums.end(),greater<int>());
        int len = nums.size(), start = 0, myMax = 1;
        vector<int>result;
        vector<int>pair(len);
        vector<int>dp(len,1);

        for(int i =0; i < len; i++) pair[i] = i;
        for(int i = 1; i < len; ++i){
            for(int j = 0; j < i; ++j){

                if(nums[j] % nums[i] != 0)
                    continue;
                if(dp[i] < dp[j] + 1){
                    pair[i] = j;
                    dp[i] = dp[j] + 1;
                }
                if(dp[i] > myMax){
                    start = i;
                    myMax = dp[i];
                }
            }
        }

        while(pair[start] != start){
            result.push_back(nums[start]);
            start = pair[start];
        }
        result.push_back(nums[start]);

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}