#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        return nums[nums.size() - k];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}