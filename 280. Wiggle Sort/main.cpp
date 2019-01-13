#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void wiggleSort(vector<int>& nums) {

        int len = nums.size();
        if(len == 0)
            return;

        for(int i = 0; i < len - 1; ++i) {

            if (i % 2 == 0 && nums[i] > nums[i + 1]) {
                swap(nums[i], nums[i + 1]);
            } else if (i % 2 == 1 && nums[i] < nums[i + 1]) {
                swap(nums[i], nums[i + 1]);
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}