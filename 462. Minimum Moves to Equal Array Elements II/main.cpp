#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int len = nums.size(), result = 0;
        nth_element(nums.begin(), nums.begin() + len/2, nums.end());
        for(auto val : nums)
            result += abs(val - nums[len/2]);

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}