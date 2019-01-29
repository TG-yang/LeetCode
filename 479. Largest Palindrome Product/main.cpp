#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Solution {
public:
    int largestPalindrome(int n) {
        if (n == 1)
            return 9;
        int Max = pow(10, n) - 1;
        int Min = pow(10, n - 1);

        for(int i = Max; i >= Min; --i){
            long mix = myReverse(i);
            for(long j = Max; j * j >= mix; --j){
                if(mix % j == 0 && mix / j <= Max)
                    return mix % 1337;
            }
        }
        return -1;
    }

private:
    long myReverse(long n){
        string str = to_string(n);
        string strR = str;
        reverse(strR.begin(),strR.end());
        return stol(str + strR);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}