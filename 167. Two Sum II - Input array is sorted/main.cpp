#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int begin = 0;
        int end = numbers.size() - 1;
        int myanswer = numbers[begin] + numbers[end];

        while(begin < end){
            if(myanswer > target)
                --end;
            else if(myanswer < target)
                ++begin;
            else
                break;
            myanswer = numbers[begin] + numbers[end];
        }
        vector<int>res;
        res.push_back(begin + 1);
        res.push_back(end + 1);

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}