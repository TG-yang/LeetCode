#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>result;
        int len = nums.size();
        if(len < 4)
            return result;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < len; ++i){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int tempTarget = target - nums[i];
            for(int j = i + 1; j < len; ++j){
                if(j > i + 1 &&nums[j] == nums[j - 1]) continue;
                int numsBegin = j + 1, numsEnd = len - 1;
                while(numsBegin < numsEnd){
                    int sum = nums[j] + nums[numsBegin] + nums[numsEnd];
                    if(sum == tempTarget){
                        vector<int> t;
                        t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[numsBegin]);
                        t.push_back(nums[numsEnd]);
                        result.push_back(t);
                        --numsEnd;++numsBegin;
                        while(numsBegin < numsEnd && nums[numsBegin] == nums[numsBegin - 1]) ++numsBegin;
                        while(numsBegin < numsEnd && nums[numsEnd] == nums[numsEnd + 1]) --numsEnd;
                    }else if(sum > tempTarget)
                        --numsEnd;
                    else
                        ++numsBegin;
                }
            }
        }
        for(int i = 0; i < result.size(); ++i){
            for(int j = 0; j < result[i].size(); ++j){
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
        return result;
    }
};

int main() {
    Solution*s = new Solution();
    vector<int> nums = {1,-2,-5,-4,-3,3,3,5};
    s->fourSum(nums,-11);
    return 0;
}