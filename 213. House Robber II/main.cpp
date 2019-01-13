#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:

public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        if (nums.size() == 1)
            return nums[0];

        return max(robDiv(nums,0,nums.size() - 2),robDiv(nums,1,nums.size() - 1));
    }
    int robDiv(vector<int>&nums,int begin, int end){

        int plast = 0, pplast = 0;

        for(int i = begin; i <= end; ++i){

            int temp = plast;
            plast = max(plast, pplast + nums[i]);
            pplast = temp;
        }
        return plast;
    }
};




int main() {
    Solution*s = new Solution();
    vector<int>nums{1,1,1,2};
    s->rob(nums);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}