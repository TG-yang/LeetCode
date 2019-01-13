#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        if(nums.size() <= 1)
            return nums.size();

        vector<int>res(nums.size(),1);
        int myMax = 0;

        for(int i = 0; i < nums.size(); ++i){
            for(int j = 0; j < i; ++j){
                if(nums[j] < nums[i])
                    res[i] = max(res[i],res[j] + 1);
            }
            myMax = max(myMax,res[i]);
        }

        return myMax;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}