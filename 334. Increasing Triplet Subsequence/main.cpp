#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if (nums.size() < 3) return false;
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] <= firstMin){//<=
                firstMin = nums[i];
            }
            else if (nums[i] <= secondMin){
                secondMin = nums[i];
            }
            else{
                return true;
            }
        }
        return false;
    }
};



int main() {

    Solution*s;
    vector<int>nums = {1,2,3,4,5};
    s->increasingTriplet(nums);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}