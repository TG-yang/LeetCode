#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int minResult = INT_MAX;
        int begin = 0;
        int end = nums.size() - 1;

        while(begin < end){
            int mid = begin + (end - begin) / 2;
            if(nums[mid] < nums[end])
                end = mid;
            else
                begin = mid + 1;
        }

        return nums[begin];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}