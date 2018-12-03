#include <iostream>
#include<vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff = INT_MAX;
        int result;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int beginNums = 1 + i, endNums = nums.size() - 1;
            while (beginNums < endNums) {
                int temp = nums[i] + nums[beginNums] + nums[endNums];
                if(diff > abs(temp - target)){
                    result = temp;
                    diff = abs(temp - target);
                    while (beginNums < endNums && nums[beginNums] == nums[beginNums + 1]) ++beginNums;
                    while (beginNums < endNums && nums[endNums] == nums[endNums - 1]) --endNums;
                }
                if (temp < target)
                    ++beginNums;
                else if(temp > target)
                    --endNums;
                else
                    return result;
            }
        }
        return result;
    }
};

int main() {
    Solution*s = new Solution();
    vector<int> nums = {-1,0,1,1,55};
    std::cout << s->threeSumClosest(nums,3) << std::endl;
    return 0;
}