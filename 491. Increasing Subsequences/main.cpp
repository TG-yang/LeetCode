#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        if(nums.size() < 2) return {};
        set<vector<int>> set1;
        sort(nums.begin(),nums.end());
        vector<int>item;
        helper(nums,set1,item,0);
        vector<vector<int>>result(set1.begin(),set1.end());
        return result;
    }

private:
    void helper(vector<int>&nums, set<vector<int>>&set1, vector<int>item, int start){
        if(item.size() >= 2)
            set1.insert(item);
        for(int i = start; i < nums.size(); ++i){
            if(item.size() == 0 || item.back() >= nums[i]){
                item.push_back(nums[i]);
                helper(nums,set1,item,i + 1);
                item.pop_back();
            }
        }
        return;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}