#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {

        int Min = INT_MAX;
        for(auto num : nums)
            Min = min(Min,num);

        int result = 0;
        for(auto num : nums)
            result += num - Min;

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}