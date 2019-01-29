#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        if (nums.size() < 2) {
            return 0;
        }
        int max_xor = INT_MIN, value = INT_MIN;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                value = nums[i] ^ nums[j];
                max_xor = max(max_xor, value);
            }
        }
        return max_xor;
    }
};




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}