#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1) return nums.size();
        vector<int> vector1;
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = 1;
        int count = 1;
        for(i = 0, j = 1; j < nums.size(); ++i, ++j){
            if(nums[i] != nums[j])
                nums[count++] = nums[j];
        }
        return count;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}