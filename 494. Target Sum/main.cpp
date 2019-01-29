#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int result = 0;
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        helper(nums,S,0,0);
        return result;
    }

private:
    void helper(vector<int>&nums,int S, int sum, int cnt){
        if(cnt == nums.size()){
            if(sum == S)
                ++result;
            return;
        }

        helper(nums, S, sum + nums[cnt], cnt + 1);
        helper(nums, S, sum - nums[cnt], cnt + 1);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}