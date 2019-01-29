#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return helper(nums,0,nums.size() - 1);
    }

private:
    int helper(vector<int>&nums, int l, int r){
        if(l >= r) return 0;
        int mid = (r + l) / 2;
        int cnt = 0;
        cnt += helper(nums, l, mid) + helper(nums, mid + 1, r);

        for(int i = l, j = mid + 1; i <= mid; ++i){
            while (j <= r && (nums[i] + 0.0) / 2 > nums[j])
                ++j;
            cnt += j - mid - 1;
        }

        sort(nums.begin() + l, nums.begin() + r + 1);

        return cnt;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}