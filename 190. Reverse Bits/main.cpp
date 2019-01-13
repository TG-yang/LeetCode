#include <iostream>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t fool = 0;
        uint32_t mask = 1;
        for(int i = 0; i < 32; ++i){
            fool = (fool << 1) | ((n & mask) >> i);
            mask = mask << 1;
        }

        return fool;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}