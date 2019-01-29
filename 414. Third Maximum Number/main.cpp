#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(), compare);
        int time = 1;
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i] != nums[i - 1])
                ++time;
            if(time == 3)
                return nums[i];
        }

        return nums[0];
    }

private:
    static bool compare(int a, int b){
        return a > b;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}