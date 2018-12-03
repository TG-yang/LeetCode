#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      //  next_permutation(nums.begin(),nums.end());
        if(nums.empty())
            return;
        int n = nums.size();
        int i,j;
        for(i = n - 2; i >= 0; --i){
            if(nums[i + 1] > nums[i]){
                for(j = n - 1; j > i; --j){
                    if(nums[j] > nums[i])
                        break;
                }
                swap(nums[i],nums[j]);
                reverse(nums.begin() + i + 1, nums.end());
                return;
            }
        }
        reverse(nums.begin(),nums.end());
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}