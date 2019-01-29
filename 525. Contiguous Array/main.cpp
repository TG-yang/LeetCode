#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int>hash;
        int Max = 0, sum = 0;
        hash[0] = -1;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 0){
                nums[i] = -1;
            }
        }
        for(int i = 0; i < nums.size(); ++i){
            sum += nums[i];
            if(hash.find(sum) != hash.end()){
                Max = max(Max, i - hash[sum]);
            }else{
                hash[sum] = i;
            }
        }

        return Max;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}