#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        unordered_set<int>numSet;

        for(int i = 0; i <nums.size(); ++i){
            if(numSet.count(nums[i]) == 0)
                numSet.insert(nums[i]);
            else
                numSet.erase(nums[i]);
        }

        return *numSet.begin();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}