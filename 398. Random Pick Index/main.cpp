#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    unordered_map<int,vector<int>>hash;
public:
    Solution(vector<int> nums) {

        for(int i = 0; i < nums.size(); ++i)
            hash[nums[i]].push_back(i);
    }

    int pick(int target) {

        vector<int> temp = hash[target];
        int index = rand() % temp.size();
        return temp[index];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * int param_1 = obj.pick(target);
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}