#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() / 2;
        sort(nums.begin(),nums.end());

        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == nums[i + n])
                return nums[i];
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}