#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        multimap<int,int>myMap;
        vector<int>result;
        for(int i = 0; i < nums.size(); ++i){

            if(myMap.find(nums[i]) != myMap.end())
                myMap.erase(nums[i]);
            else
                myMap.insert(make_pair(nums[i],1));
        }

        for(auto item : myMap)
            result.push_back(item.first);

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}