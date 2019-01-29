#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {

        if(k == 0)
            return {};
        if(k == nums.size()){
            sort(nums.begin(),nums.end());
            if(k % 2 == 0){
                double mid = ((double)nums[k / 2] + (double)nums[k / 2 - 1]) / 2.0;
                return vector<double>{mid};
            }else{
                return vector<double>{(double)nums[k / 2]};
            }
        }
        vector<int>::iterator end = nums.begin();
        vector<int>::iterator start = nums.begin();
        int i = 0;
        vector<double>result;
        while (i < k){
            ++end; ++i;
        }
        for(end; end != nums.end() + 1; ++end, ++start){
            vector<int>temp(start, end);
            sort(temp.begin(),temp.end());
            if(k % 2 != 0)
                result.push_back(temp[k / 2]);
            else{
                double mid = ((double)temp[k / 2] + (double)temp[k / 2 - 1]) / 2.0;
                result.push_back(mid);
            }
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}