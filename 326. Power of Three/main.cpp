#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {

        while(n > 0 && n % 3 == 0){

            n /= 3;
        }

        return n == 1;
    }
};

int main() {

    Solution*s;
    s->isPowerOfThree(1);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}