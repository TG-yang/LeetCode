#include <iostream>

using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {

        if(n == 0)
            return 0;

        int kth = 1;
        while (1){
            n -= kth;
            if(n < kth)
                return kth;
            else
                ++kth;

        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}