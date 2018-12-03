#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int L = nums.size();
        if(L == 0 || L == 1)
            return 0;
        int G = nums[0], Gstep = G, R = 1;
        for(int i = 1; i < L - 1; ++i){
            G = max((nums[i] + i),G);//局部找最大值
            if(i >= Gstep){
                ++R; Gstep = G;
            }
            if(Gstep >= L - 1)
                return R;
        }
        return R;
    }
};

int main() {
    Solution*s;
    vector<int>nums{1,1,2,1,1};
    std::cout << s->jump(nums) << std::endl;
    return 0;
}