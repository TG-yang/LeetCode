#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int result;
        int smallest = 1;
        sort(nums.begin(),nums.end());
        vector<int>::iterator it = find(nums.begin(),nums.end(),smallest);
        if(it == nums.end())
            return smallest;
        ++smallest;
        ++it;
        while(it != nums.end()){
            if(*it == smallest){
                ++smallest;
                ++it;
            } else if(*it > smallest)
                return smallest;
            else
                ++it;
        }
        return smallest;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}