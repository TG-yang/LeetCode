#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        if(nums.size() == 1)
            return nums[0];

        vector<int>maxNums(nums.size(),0);

        maxNums[0] = nums[0];
        maxNums[1] = max(nums[0],nums[1]);
        int i;
        for(i = 2; i < nums.size(); ++i)
            maxNums[i] = max(maxNums[i - 2] + nums[i], maxNums[i - 1]);

        return maxNums[i - 1];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}