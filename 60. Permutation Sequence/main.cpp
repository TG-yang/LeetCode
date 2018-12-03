#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>nums;
        string result;
        int count = 1;
        for(int i = 0; i < n; ++i)
            nums.push_back(i + 1);
        do{
            if(count == k)
                break;
            ++count;
        }while (next_permutation(nums.begin(),nums.end()));
        result = to_string(nums[0]);
        for(int i = 1; i < nums.size(); ++i)
            result += to_string(nums[i]);
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}