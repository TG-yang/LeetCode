#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums.at(i) == target){
                index = i; return index;
            }
            if(nums.at(i) < target)
                ++index;
            if(nums.at(i) > target)
                return index;
        }
        return index;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}