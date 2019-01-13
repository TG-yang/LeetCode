#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int numsSize = nums.size();
        k = k % numsSize;
        vector<int>resultLeft, resultRight;

        for(int i = 0; i < numsSize; ++i){

            if(i < numsSize - k){
                resultRight.push_back(nums[i]);
            }else{
                resultLeft.push_back(nums[i]);
            }
        }

        nums.clear();
        nums.assign(resultLeft.begin(),resultLeft.end());

        for(int i = 0; i < resultRight.size(); ++i)
            nums.push_back(resultRight[i]);

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}