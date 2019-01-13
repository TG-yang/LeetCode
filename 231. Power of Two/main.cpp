#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n % 2 != 0 && n != 1)
            return false;

        while(n >= 0){
            n = n >> 1;
            if(n == 1)
                return true;
            if(n % 2 != 0)
                return false;
        }
        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}