#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if(nums.size() == 0)
            return false;
        sort(nums.begin(),nums.end());
        bool result = false;
        int begin = 0, end = nums.size() - 1, mid = (begin + end) / 2;
        while(begin <= end){
            if(target > nums[mid]){
                begin = mid;
                ++begin;
            }else if(target < nums[mid]){
                end = mid;
                --end;
            }else{
                result = true;
                return result;
            }
            mid = (begin + end) / 2;
        }
        return result;
    }
};

int main() {
    Solution*s;
    vector<int>nums{2,5,6,0,0,1,2};
    int target = 3;
    s->search(nums,target);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}