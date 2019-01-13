#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());
        vector<pair<int,int>>vector1;

        for(int i = 0; i <nums.size(); ++i){
            int count = 1;
            while(i + 1 < nums.size() && nums[i] == nums[i + 1]){
                ++count;
                ++i;
            }
            vector1.push_back(pair<int,int>(count,nums[i]));
        }
        sort(vector1.begin(),vector1.end());
        vector<int>result;

        for(int i = vector1.size() - 1,j = 0; j < k; --i,++j){
            result.push_back(vector1[i].second);
        }
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}