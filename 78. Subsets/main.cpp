#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>oneChind;
        for(int k = 0; k <= nums.size();++k){
            dfs(oneChind,nums,0,k);
        }
        return result;
    }
    void dfs(vector<int>&oneChild,vector<int>nums, int start, int k){
        if(oneChild.size() == k){
            result.push_back(oneChild);
            return;
        }
        for(int i = start; i < nums.size(); ++i){
            oneChild.push_back(nums[i]);
            dfs(oneChild,nums,i + 1, k);
            oneChild.pop_back();
        }
    }
private:
    vector<vector<int>>result;
};

int main() {
    std::cout << "Hello, World!" << std::endl;//123
    return 0;
}