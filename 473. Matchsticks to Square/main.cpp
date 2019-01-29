#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool makesquare(vector<int>& nums) {

        int sum = 0;
        for(int i = 0; i < nums.size(); ++i){
            sum += nums[i];
        }
        if(sum % 4 != 0) return false;
        vector<int>sums(4,0);

        return helper(nums, sums, 0, sum / 4);
    }

private:
    bool helper(vector<int>& nums, vector<int>&sums, int index, int avg){
        if(nums.size() <= 3 || index > nums.size()) return false;
        if(index == nums.size()){
            if(sums[0] == avg && sums[1] == avg && sums[2] == avg && sums[3] == avg)
                return true;
            else
                return false;
        }
        for(int i = 0; i < 4; ++i){
            if(sums[i]  + nums[index] <= avg){
                if(i > 0 && sums[i - 1] == sums[i]) continue;
                sums[i] += nums[index];
                if(helper(nums,sums,index + 1, avg)) return true;
                sums[i] -= nums[index];
            }
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}