#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1)
            return false;

        for(int i = 0; i < n; ++i){
            int slow = i;
            int fast = getIndex(slow,nums);
            while(nums[i] * nums[slow] > 0 && nums[i] * nums[fast] > 0){

                if(slow == fast){
                    if(slow == getIndex(slow,nums)) break;
                    return true;
                }

                slow = getIndex(slow,nums);
                fast = getIndex(fast,nums);
                if(nums[slow] * nums[fast] <= 0)
                    break;
                fast = getIndex(fast,nums);
            }
        }

        return false;
    }

private:
    int getIndex(int i, vector<int>nums){

        return (i + nums[i]) % nums.size();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}