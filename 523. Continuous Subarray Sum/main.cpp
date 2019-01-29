#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int>sum(nums.begin(),nums.end());
        for(int l = 2; l <= len; ++l){
            for(int i = 0; i <= len - l; ++i){
                sum[i] += nums[i + l - 1];
                if(k == 0 && sum[i] == 0) return true;
                else if(k != 0 && sum[i] % k == 0) return true;
            }
        }

        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}