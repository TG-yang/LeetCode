#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == -2147483648 && divisor == -1)
            return 2147483647;
        if(divisor == 1)
            return dividend;
        if(divisor == -1)
            return dividend * -1;
        int result;
        result = dividend / divisor;
        return result;
//        vector<int> myDividend;
//        vector<int> inverseDividend;
//        int result = 0;
//        int n = 0;
//        int temp = 0;
//        bool isPositive = true;
//
//        if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
//            isPositive = false;
//        while(dividend > 0){
//            inverseDividend.push_back(dividend % 10);
//            dividend /= 10;
//        }
//        for(int i = inverseDividend.size() - 1; i >= 0; --i)
//            myDividend.push_back(inverseDividend.at(i));
//        while(n < myDividend.size()){
//             if(temp <= abs(divisor)){
//                temp = temp * 10 + abs(myDividend.at(n));
//                ++n;
//             }
//             if(temp >= abs(divisor)) {
//                result = result * 10 + temp / abs(divisor);
//                temp %= 10;
//             }
//        }
//        if(isPositive == false)
//            result = -result;
//        return result;
    }
};

int main() {
    Solution*s = new Solution();

    std::cout << s->divide(2147483647,2) << std::endl;
    return 0;
}