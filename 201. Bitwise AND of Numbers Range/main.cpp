#include <iostream>

using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {

        int mask = INT_MAX;

        while((m & mask) != (n & mask)){
            mask <<= 1;
        }

        return m & mask;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}