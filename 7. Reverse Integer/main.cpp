#include <iostream>
#include<cmath>

using namespace std;

class Solution {
public:

 //   #define INT_MAX 2147483647
    int reverse(int x) {
        int judge1 = 0;
        int result = 0;
        if(x < 0){
            x = abs(x);
            judge1 = 1;
        }
        while(x != 0){
            //判断是否溢出INT_MAX
            if ((result != 0 && (INT_MAX / abs(result) < 10)))
                return 0;

            int temp = x % 10;
            x = x / 10;
            result = temp + result * 10;
        }

        if(judge1 == 1)
            result = -result;
        return result;
    }
};
int main() {
    Solution*S = new Solution();
    std::cout << S->reverse(1534236469) << std::endl;
    return 0;
}