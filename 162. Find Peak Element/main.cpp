#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        if(nums.size() == 1)
            return 0;

        for(int i = 0; i < nums.size(); ++i){
            if((i == 0 && nums[i] > nums[i + 1])
                    || (i == nums.size() - 1 && nums[i] > nums[i - 1]))
                return i;

            if(0 < i && i < nums.size() - 1 && nums[i - 1] < nums[i] && nums[i] > nums[i + 1])
                return i;
        }

        return -1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}