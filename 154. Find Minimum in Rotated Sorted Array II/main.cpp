#include <iostream>
#include <vector>
#include <set>

using namespace std;

//class Solution {
//public:
//    int findMin(vector<int>& nums) {
//        set<int>setNums(nums.begin(),nums.end());
//        vector<int>vecNums(setNums.begin(),setNums.end());
//        int begin = 0;
//        int end = vecNums.size() - 1;
//
//        while(begin > end){
//            int mid = begin + (end - begin) / 2;
//
//            if(vecNums[mid] < vecNums[end]){
//                end = mid;
//            }else{
//                begin = mid + 1;
//            }
//        }
//        return vecNums[begin];
//    }
//};

class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0]<nums[nums.size()-1]) return nums[0];
        int l = 0;
        int r = nums.size()-1;
        while(l<r){
            int mid= l+(r-l)/2;
            //if(nums[mid] == nums[r] || nums[mid] == nums[l])
            if(nums[mid] < nums[mid-1]) return nums[mid];
            else if(nums[mid] > nums[r]) l = mid + 1;
            else if(nums[mid] < nums[r]) r = mid -1;
            else{
                //l++;
                r--;
            }
        }
        return nums[l];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}