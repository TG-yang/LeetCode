#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {

        int temp = 0;
        int tempLength = 0;
        int minLength = INT_MAX;

        for(int i = 0; i < nums.size(); ++i){

            if(temp < s){
                temp += nums[i];
                ++tempLength;
            }
            if(temp >= s){
                if(minLength > tempLength)
                    minLength = tempLength;

                while(temp >= s){
                    temp -= nums[i - tempLength + 1];
                    --tempLength;
                }

                if(minLength > (tempLength + 1))
                    minLength = tempLength + 1;
            }
        }
        if(minLength == INT_MAX)
            return 0;
        else
            return minLength;
    }
};



int main() {
    Solution*s;
    vector<int>nums{2,3,1,2,4,3};
    s->minSubArrayLen(7,nums);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}