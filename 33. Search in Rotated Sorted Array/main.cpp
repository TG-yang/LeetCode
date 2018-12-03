#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index;
        for(index = 0; index < nums.size(); ++index){
            if(nums[index] == target)
                return index;
        }
        if(index == nums.size())
            return -1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}