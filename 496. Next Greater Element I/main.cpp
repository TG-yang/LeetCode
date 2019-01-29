#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int>result;
        int len1 = nums.size();
        int len2 = findNums.size();
        for(int i = 0; i < len2; ++i){
            auto index = find(nums.begin(),nums.end(), findNums[i]);
            while (index != nums.end()){
                if(findNums[i] < *index){
                    result.push_back(*index);
                    break;
                }
                ++index;
            }
            if(index == nums.end())
                result.push_back(-1);
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}