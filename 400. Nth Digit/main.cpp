#include <iostream>

using namespace std;

class Solution {
public:
    int findNthDigit(int n) {

        long digit = 1; //确定是哪一位
        long base = 9; //每位数的个数
        long ith = 1; //每位数的起始值

        while(n > base*digit){
            n = n - base*digit;
            digit++;
            ith = ith + base;
            base = base * 10;
        }

        return to_string(ith + (n - 1) / digit)[(n - 1) % digit] - '0';
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}