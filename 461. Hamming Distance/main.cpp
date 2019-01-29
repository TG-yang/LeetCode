#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {

        int count = 0;
        while(x != 0 || y != 0){

            if((x & 0x1) != (y & 0x1)) ++count;
            x = x >> 1, y = y >>1;
        }
        return count;
    }
};

int main() {

    cout << 0x21;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}