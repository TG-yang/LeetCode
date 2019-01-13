#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<long long> s;
        for(int i=0,j=0;i<nums.size();i++){
            if(i-j>k){
                s.erase(nums[j++]);
            }
            auto it=s.lower_bound((long long)nums[i]-t);
            if(it!=s.end()&&abs(nums[i]-*it)<=t) return true;
            s.insert(nums[i]);
        }
        return false;
    }
};



int main() {
    Solution*solution;
    vector<int>nums{4,1,6,3};
    solution->containsNearbyAlmostDuplicate(nums,100,1);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}