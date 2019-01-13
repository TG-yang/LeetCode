#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        vector<string>result;
        string temp = "";
        int begin, end;

        for(int i = 0; i < nums.size(); ++i){

            if(temp == ""){
                begin = end = nums[i];
                temp += to_string(nums[i]);
            }
            if(nums[i] + 1 == nums[i + 1]){
                end = nums[i + 1];
            }else{
                if(begin == end){
                    result.push_back(temp);
                    temp = "";
                }else{
                    temp += "->";
                    temp += to_string(end);
                    result.push_back(temp);
                    temp = "";
                }
            }
        }

        return result;
    }
};


int main() {
    Solution*s;
    vector<int>nums = {0,1,2,4,5,7};
    s->summaryRanges(nums);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}