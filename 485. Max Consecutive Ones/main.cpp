#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int maxCount = 0;
        if(nums[0] == 1)
            maxCount = 1;
        else
            maxCount = 0;
        int count = 1;
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i - 1] == nums[i] && nums[i] == 1){
                ++count;
            } else if(nums[i] == 1){
                count = 1;
            }else if(nums[i] == 0)
                count = 0;

            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}