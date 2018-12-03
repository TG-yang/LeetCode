#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int end = nums.size() - 1, count = 0;
        int temp;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == val && i < end){
                while(nums[end] == val && end > i)
                    --end;
                temp = nums[i];nums[i] = nums[end];nums[end--] = temp;
            }
        }
        for(int j = nums.size() - 1; j >= 0; --j){
            if(nums[j] == val)
                ++count;
        }

        return nums.size() - count;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}