#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        map<int,string>hash;
        vector<int>temp = nums;
        vector<string>result;
        sort(temp.begin(),temp.end());
        int n = 1;
        for(int i = nums.size() - 1; i != 0; --i){
            hash[temp[i]] = to_string(n);
            ++n;
        }
        hash[temp[nums.size() - 1]] = "Gold Medal";
        hash[temp[nums.size() - 2]] = "Silver Medal";
        hash[temp[nums.size() - 3]] = "Bronze Medal";

        for(auto & num : nums)
            result.push_back(hash[num]);
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}