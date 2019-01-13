#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        long long allProduct = 1;
        int countZero = 0;
        vector<int> result;

        if(find(nums.begin(),nums.end(),0) == nums.end()){

            for(int i = 0 ; i < nums.size(); ++i){
                allProduct *= nums[i];
            }

            for(int i = 0; i < nums.size(); ++i){
                result.push_back(allProduct / nums[i]);
            }
        }else{
            for(int i = 0 ; i < nums.size(); ++i){
                if(nums[i] != 0)
                    allProduct *= nums[i];
                else
                    ++countZero;
            }

            vector<int> temp(nums.size(), 0);
            result = temp;
            if(countZero == 1){
                result[distance(nums.begin(),find(nums.begin(),nums.end(),0))] = allProduct;
            }
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}