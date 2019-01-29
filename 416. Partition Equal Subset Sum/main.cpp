#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
    unordered_set<int>myKey;
public:
    bool canPartition(vector<int>& nums) {

        int target = 0;
        for(auto num : nums)
            target += num;
        int num = target;
        target /= 2;
        if(num % 2 == 1)
            return false;

        return helper(target,num,nums,0,myKey);
    }

private:
    static bool helper(int target, int num, vector<int>&nums,int start, unordered_set<int>&myKey){

        if(target == num)
            return true;
        if(myKey.find(num) != myKey.end()) return false;
        myKey.insert(num);
        for(int i = start; i < nums.size(); ++i){

            if(helper(target, num - nums[i],nums,i + 1, myKey)){
                return true;
            }
        }

        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}