#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {


        unordered_set<int>hash;
        for(int i = 1; i <= nums.size(); ++i)
            hash.insert(i);
        for(int i = 0; i < nums.size(); ++i){
            if(hash.count(nums[i]))
                hash.erase(nums[i]);
        }
        vector<int> result(hash.begin(),hash.end());

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}