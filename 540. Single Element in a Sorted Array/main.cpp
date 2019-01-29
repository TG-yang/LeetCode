#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i = 0;
        for(i = 0; i < nums.size(); i += 2){
            if(i == nums.size() - 1)
                return nums[i];
            else{
                if(nums[i] != nums[i + 1]){
                    break;
                }
            }
        }
        return nums[i];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}