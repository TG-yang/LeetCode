#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//private:
//    int result = 0;
//public:
//    int combinationSum4(vector<int>& nums, int target) {
//
//        helper(nums,target);
//
//        return result;
//    }
//
//private:
//
//    void helper(vector<int>&nums,int target){
//
//        if(target == 0){
//            ++result;
//            return;;
//        }
//
//        for(int i = 0; i < nums.size(); ++i){
//
//            if(target - nums[i] >= 0)
//                helper(nums,target - nums[i]);
//        }
//
//        return;
//    }
//};

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        if(nums.size()==0) return 0;
        vector<int> dp(target+1, 0);
        dp[0] = 1;
        for(int i =1; i <= target; i++)
        {
            for(auto val: nums)
                if(val <= i) dp[i] += dp[i-val];
        }
        return dp[target];
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}