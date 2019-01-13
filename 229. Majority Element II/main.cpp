#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        unordered_map<int,int>myMap;
        vector<int>result;
        int key = nums.size() / 3;
        for(int i = 0; i < nums.size(); ++i){

            if(myMap.find(nums[i]) != myMap.end())
                ++myMap[nums[i]];
            else
                myMap[nums[i]] = 1;
        }

        for(auto m : myMap){
            if(m.second > key)
                result.push_back(m.first);
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}