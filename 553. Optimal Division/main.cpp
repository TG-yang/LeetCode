#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        if(nums.size() == 1)
            return to_string(nums[0]);
        if(nums.size() == 2){
            return to_string(nums[0]) + "/" + to_string(nums[1]);
        }
        string ret = to_string(nums[0]);
        string div = to_string(nums[1]);
        for(int i = 2; i < nums.size(); ++i){
            div += "/";
            div += to_string(nums[i]);
        }
        ret += "(" + div + ")";

        return ret;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}