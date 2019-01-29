#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(nums.size() == 0)
            return 0;
        sort(nums.begin(),nums.end());
        set<pair<int,int>>set1;
        for(int i = 0; i < nums.size(); ++i){
            for(int j = i + 1; j < nums.size(); ++j){
                if(nums[j] - nums[i] == k)
                    set1.insert(make_pair(nums[i],nums[j]));
                else if(nums[j] - nums[i] < k){
                    continue;
                }else if(nums[j] - nums[i] > k){
                    break;
                }
            }
        }

        return set1.size();
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}