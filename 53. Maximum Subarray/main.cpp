#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = INT_MIN;
        int TopNItems = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(TopNItems + nums[i] >= 0){
                TopNItems += nums[i];
                if(TopNItems >= result)
                    result = TopNItems;
            }else{
                TopNItems = 0;
            }
        }
        if(result == INT_MIN){
            for(int i = 0; i < nums.size(); ++i) {
                if(nums[i] >= result)
                    result = nums[i];
            }
        }
        return result;
    }
    int maxSubArray2(vector<int>& nums){
        int n = nums.size();
        if(n == 0) return 0;
        int cur =nums[0], res = cur;
        for(int i = 0; i < n; ++i){
            cur = max(cur,0) + nums[i];
            res = max(res, cur);
        }
        return res;
    }
};

int main() {
    Solution*s;
    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    s->maxSubArray(nums);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}