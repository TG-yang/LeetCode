#include <iostream>

using namespace std;

class Solution {
public:
    int helpler(int n, bool left){
        if(n == 1)  return 1;
        if(left == true)    return 2 * helpler(n / 2, false);
        else    return 2 * helpler(n / 2, true) - 1 + n % 2;
    }
    int lastRemaining(int n) {
        return helpler(n, left);
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}