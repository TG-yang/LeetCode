#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int result = 0;
        int n = nums.size();
        for(int i = 0; i < 32; ++i){
            int count = 0;
            for(auto&val : nums){
                if((val >> i) & 1) ++count;
            }
            result += (count * (n - count));
        }
        return result;
    }
};
//要求任意两个数的海明距离，根据上面的分析，海明距离是不同位的个数求和，对于数组中数的每一位，
//我们都可以把它分成两组，一组该位是0 另一组为1，对于每一位的分别求解，
//就可以得到对于该位上所有数的海明距离之和，最后将各位求和结果再求和，就得到了最终解。
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}