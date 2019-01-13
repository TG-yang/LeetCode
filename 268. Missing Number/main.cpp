#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//public:
//    int missingNumber(vector<int>& nums) {
//
//        if(nums[0] == 1)
//            return 0;
//
//        sort(nums.begin(),nums.end());
//        for(int i = 0; i < nums.size(); ++i){
//            if(nums[i] + 1 != nums[i + 1])
//                return nums[i] + 1;
//        }
//    }
//};

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long len=nums.size();
        long long sum=len*(len+1)/2,sum2=0;
        for(auto i:nums)
            sum2+=i;
        return sum-sum2;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}