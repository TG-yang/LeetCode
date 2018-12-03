#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int L = nums.size();
        if(nums[0] == 0 && nums.size() == 1)
            return true;
        if(nums[0] == 0)
            return false;
        int Gstep = nums[0], G = Gstep;
        for(int i = 0; i < L; ++i){
            G = max(nums[i] + i,G);
            if(i >= Gstep){
                if(G <= i && nums[i] == 0 && i != L - 1)
                    return  false;
                else
                    Gstep = G;
            }
            if(G >= L - 1)
                return true;
        }
        return false;
    }
};

int main() {
    Solution*s;
    vector<int>nums{1,2,3};
    s->canJump(nums);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}