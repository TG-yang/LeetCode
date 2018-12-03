#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int len = nums.size();
        if(len < 3)
            return result;
        sort(nums.begin(),nums.end());
        for(int i = 0; nums[i] <= 0; ++i){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int aim = nums[i], beginNums = i + 1, endNums = len - 1;
            while(beginNums < endNums){
                int sum = aim + nums[beginNums] + nums[endNums];
                if(sum == 0){
                    vector<int> temp;
                    temp.push_back(aim);
                    temp.push_back(nums[beginNums]);
                    temp.push_back(nums[endNums]);
                    result.push_back(temp);
                    ++beginNums;--endNums;
                    while(beginNums < endNums && nums[beginNums] == nums[beginNums - 1]) ++beginNums;
                    while(beginNums < endNums && nums[endNums] == nums[endNums + 1]) --endNums;
                } else if(sum > 0)
                    --endNums;
                else
                    ++beginNums;

            }
        }

        return result;
    }
};

int main() {
    Solution*s = new Solution();
    vector<int> test = {0,0,0};
    vector<vector<int>> result = s->threeSum(test);
    for(int i = 0; i < result.size(); ++i){
        cout<< result.at(i).at(0)<<" "<<result.at(i).at(1)<<" "<<result.at(i).at(2)<<endl;
    }
    return 0;
}