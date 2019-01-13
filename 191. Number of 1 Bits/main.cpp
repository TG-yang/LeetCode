#include <iostream>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int mask = 1;
        int result = 0;

        while(n != 0){
            if(n & mask)
                ++result;
            n = n >> 1;
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}