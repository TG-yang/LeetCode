#include <iostream>
#include <vector>
#include <map>

using namespace std;

class NumArray {
    vector<int>result1;
    map<int,int>changeRecord;
    vector<int>sum;
public:
    NumArray(vector<int> nums) {

        if(nums.size() > 0){

            result1 = nums;
            sum.push_back(nums[0]);

            for(int i = 1; i < nums.size(); ++i){

                sum.push_back(sum[i - 1] + nums[i]);
            }
        }
    }

    void update(int i, int val) {

        changeRecord[i] = val;
    }

    int sumRange(int i, int j) {

        map<int,int>::iterator it = changeRecord.begin();
        int res = 0;

        if(i == 0)
            res = sum[j];
        else
            res = sum[j] - sum[i - 1];


        for(it; it != changeRecord.end(); ++it){

            if(it->first > i - 1 && it->first <= j){

                res = res + it->second - result1[it->first];
            }else if(it->first > j)
                break;
        }

        return res;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * obj.update(i,val);
 * int param_2 = obj.sumRange(i,j);
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}