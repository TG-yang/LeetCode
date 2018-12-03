#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2)
            return 0;

        int maxDiff = INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size() - 1; ++i){
            int tmp = abs(nums[i + 1] - nums[i]);
            if(maxDiff < tmp)
                maxDiff = tmp;
        }

        return maxDiff;
    }
};

int main() {

    vector<int>vec;
    vec.push_back(1);
    vec.push_back(10000000);
    Solution*s;
    s->maximumGap(vec);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}