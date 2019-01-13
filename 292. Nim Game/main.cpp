#include <iostream>

using namespace std;

class Solution
{
public:
    bool canWinNim(int n)
    {
        return n%4!=0;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}