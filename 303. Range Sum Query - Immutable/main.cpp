#include <iostream>
#include <vector>

using namespace std;

class NumArray {
private:
    vector<int>result;
public:
    NumArray(vector<int> nums) {

        int len = nums.size();

        if(len >0){
            result.push_back(nums[0]);
            for(int i = 1; i < len; ++i){
                result.push_back(result[i - 1] + nums[i]);
            }
        }
    }

    int sumRange(int i, int j) {
        if(i == 0)
            return result[j];
        else
            return result[j] - result[i - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}