#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        if(nums.size() == 1)
            return {-1};
        if(nums.size() == 0)
            return {};
        vector<int> result;
        for(int i = 0; i < nums.size(); ++i){
            int j;
            int cnt = 0;
            for(j = i + 1; cnt < nums.size(); ++j, ++cnt){
                j = j % nums.size();
                if(nums[i] < nums[j]){
                    result.push_back(nums[j]);
                    break;
                }
            }
            if(cnt == nums.size())
                result.push_back(-1);
        }
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}