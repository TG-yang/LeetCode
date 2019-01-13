#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int patchCount = 0;
        int index = 0;
        long miss = 1;
        while (miss <= n) {
            if (index < nums.size() && nums[index] <= miss) {
                miss += nums[index++];
            } else {
                miss += miss;
                patchCount++;
            }
        }
        return patchCount;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}