#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int addDigits(int num) {

        if(num == 0)
            return 0 ;
        return (num - 1) % 9 - 1;
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}