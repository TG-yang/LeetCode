#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        if(k <= 0) return false;
        if(nums.size() == 0 || nums.size() == 1) return false;

        unordered_map<int,int>myMap;
        for(int i = 0; i < nums.size(); ++i){

            if(myMap.find(nums[i]) == myMap.end()){
                myMap.insert({nums[i],i});
            }else{
                int temp = i - myMap[nums[i]];
                if(temp <= k)
                    return true;
                else
                    myMap[nums[i]] = i;
            }
        }

        return false;
    }
};

int main() {
    Solution*solution;
    vector<int>nums{4,2,3,1,2,3};
    solution->containsNearbyDuplicate(nums,3);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}