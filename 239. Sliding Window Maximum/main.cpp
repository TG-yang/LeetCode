#include <iostream>
#include <vector>
#include <queue>
using namespace std;


class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dp;
        vector<int>result;

        if(nums.size() == 0 || k == 0)
            return result;

        for(int i = 0; i < k; ++i){
            if(i == nums.size()) break;
            if(!dp.empty() && nums[dp.back()] < nums[i])
                dp.pop_back();
            dp.push_back(i);
        }

        result.push_back(nums[dp.front()]);
        for(int i = k; i < nums.size(); ++i){

            while(!dp.empty() && nums[dp.back()] < nums[i])
                dp.pop_back();
            dp.push_back(i);

            if(dp.front() == i - k)
                dp.pop_front();
            result.push_back(nums[dp.front()]);
        }

        return result;
    }
};

int main() {
    Solution*s;
    vector<int>nums{1,3,-1,-3,5,3,6,7};
    s->maxSlidingWindow(nums,3);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}