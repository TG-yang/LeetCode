#include <iostream>

using namespace std;

class Solution {
public:
    string toHex(int num) {
        string h = "";
        char hexChar[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
        unsigned int mask = 0xF << 28;
        unsigned int num_ = num;

        if (num == 0)
            return "0";

        if (num < 0) {
            num_ = abs(num);
            num_ = ~num_ + 1;
        }

        for (int i = 7; i >= 0; i--) {
            unsigned int n = num_ & mask;
            while (n >= 16) {
                n = n >> 4;
            }
            if ((h == "" && n > 0) ||(h.length() > 0)) {
                h += hexChar[n];
            }
            mask = mask >> 4;
        }

        return h;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}