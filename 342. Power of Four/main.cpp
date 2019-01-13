#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPowerOfFour(int num) {

        while(num > 0 && num % 4 == 0){

            num /= 4;
        }

        return num == 1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}