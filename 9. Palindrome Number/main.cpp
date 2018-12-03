#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        if(x <9)
            return true;
        long a = 0,b = x;
        while(b > 0){
            a = a * 10 + b % 10;
            b /= 10;
        }
        return x == a;
    }
};

int main() {
    Solution*s = new Solution();
    std::cout <<s->isPalindrome(3)<< std::endl;
    return 0;
}