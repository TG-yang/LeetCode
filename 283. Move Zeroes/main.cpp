#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int count = 0;

        for(int i = 0; i < nums.size();){

            if(nums[i] == 0){
                ++count;
                nums.erase(nums.begin() + i);
            }else{
                ++i;
            }
        }

        for(int i = 0; i < count; ++i){
            nums.push_back(0);
        }
    }
};

int main() {
    vector<int>res = {0,0,1};
    Solution*solution;
    solution->moveZeroes(res);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}