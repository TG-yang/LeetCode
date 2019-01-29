#include <iostream>

using namespace std;

// The rand7() API is already defined for you.
int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {

        return rand40() % 10 + 1;
    }

private:

    int rand49(){

        return 7 * (rand7() - 1) + rand7() - 1;
    }

    int rand40(){

        int num = rand49();
        while (num >= 40)
            num = rand49();

        return num;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}