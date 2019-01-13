#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        if(nums.size() < 2)
            return false;

        sort(nums.begin(),nums.end());

        for(int i = 1; i < nums.size(); ++i){

            if(nums[i] == nums[i - 1])
                return true;
        }

        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}