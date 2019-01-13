#include <iostream>

using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        while(a != 0) {
            int tmp = (a & b) << 1;
            b = a ^ b;
            a = tmp;
        }
        return b;
    }

};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}