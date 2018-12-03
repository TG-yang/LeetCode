#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroCount = 0, oneCount = 0, twoCount = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 0)
                ++zeroCount;
            else if(nums[i] == 1)
                ++oneCount;
            else
                ++twoCount;
        }
        int count = 0;
        for(count = 0; count < zeroCount; ++count)
            nums[count] = 0;
        for(;count < oneCount + zeroCount; ++count)
            nums[count] = 1;
        for(;count < nums.size(); ++count)
            nums[count] = 2;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}