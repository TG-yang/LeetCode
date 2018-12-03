#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int a = 1;
        int b = 0;
        int result;
        for(int i = 1; i <= n; ++i){
            result = a + b;
            b = a;
            a = result;
        }
        return  result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}