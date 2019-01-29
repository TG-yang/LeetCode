#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        long long int temp = 0;
        for(int i = 0; i < nums.size(); ++i){
            helper(nums,k,i,nums[i],cnt);
        }

        return cnt;
    }

private:
    void helper(vector<int>&nums, int k, int start, int curValue, int&cnt){
        if(curValue == k){
            ++cnt;
        }
        if(start + 1 == nums.size())
            return;
        helper(nums,k,start + 1, curValue + nums[start + 1], cnt);

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}