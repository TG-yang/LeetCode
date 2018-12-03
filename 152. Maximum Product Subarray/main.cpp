#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {

        if(nums.size() == 0)
            return nums[0];

        int maxPro = INT_MIN;

        for(int i = 0; i < nums.size(); ++i){

            int tmp = nums[i];
            for(int j = i + 1; j < nums.size(); ++j){

                tmp = tmp * nums[j];
                if(tmp > maxPro)
                    maxPro = tmp;
            }
            if(nums[i] > maxPro)
                maxPro = tmp;
        }

        return  maxPro;
    }
};

int main() {

    vector<int>vec;
    vec.push_back(-3);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(-2);
    Solution*s;
    s->maxProduct(vec);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}