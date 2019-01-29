#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        if(nums.size() < 1)
            return {};

        sort(nums.begin(),nums.end());
        vector<int> result;
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i - 1] == nums[i])
                result.push_back(nums[i]);
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}