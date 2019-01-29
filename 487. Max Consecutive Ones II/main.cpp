#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Max = INT_MIN;
        int zeroPos = -1;
        int count = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 1){
                ++count;
            }else{
                count = i - zeroPos;
                zeroPos = i;
            }
            Max = max(Max, count);
        }

        return Max;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}