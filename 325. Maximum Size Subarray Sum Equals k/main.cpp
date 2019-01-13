#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        if(nums.size() == 0)
            return 0;

        unordered_map<int,int> hash;
        int sum = 0, result = 0;
        hash[0] = 0;
        for(int i = 0; i < nums.size(); ++i){
            sum += nums[i];
            if(hash.count(sum - k)){

                result = max(result,i + 1 - hash[sum - k]);
            }
            if(!hash.count(sum)){
                hash[sum] = i + 1;
            }
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}