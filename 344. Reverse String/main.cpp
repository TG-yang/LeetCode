#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string reverseString(string s) {
        reverse(s.begin(),s.end());
        return s;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}