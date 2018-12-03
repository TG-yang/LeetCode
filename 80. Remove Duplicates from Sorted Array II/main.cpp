#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int count = 0;
        int cnt = 0;
        int i = 1;
        vector<int>::iterator it = nums.begin() + 1;
        sort(nums.begin(),nums.end());
        while(i < nums.size()){
            if(nums[i] == nums[i - 1])
                ++count;
            else
                count = 0;
            if(count > 1){
                nums.erase(it);
            }else{
                ++i;
                ++it;
            }
        }
        return nums.size();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}