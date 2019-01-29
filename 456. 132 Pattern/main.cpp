#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if(nums.size() < 3)
            return false;
        int lens = nums.size();
        int i = 0;

        while (i < lens){
            while (i < lens - 1 && nums[i] >= nums[i + 1]) ++i;
            int j = i + 1;
            while (j < lens - 1 && nums[j] <= nums[j + 1]) ++j;
            int k = j + 1;
            while (k < lens){
                if(nums[i] < nums[k] && nums[k] < nums[j]) return true;
                ++k;
            }
            ++i;
        }
        return false;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}