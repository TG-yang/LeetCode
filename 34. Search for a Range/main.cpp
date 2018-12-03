#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = {-1,-1};
        int begin = 0, end = nums.size() - 1;
        int count = 0;
        bool isExistBegin = false,isExistEnd = false;
        while(begin <= end){
            if(nums[begin] == target) {
                result.at(0) = begin;
                isExistBegin = true;
            }
            else
                ++begin;
            if(nums[end] == target) {
                result.at(1) = end;
                isExistEnd = true;
            }
            else
                --end;
            if(isExistBegin && isExistEnd)
                break;
        }
        return result;
    }
};

int main() {
    Solution*s = new Solution();
    vector<int>nums = {5,7,7,8,8,10};
    s->searchRange(nums,8);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}