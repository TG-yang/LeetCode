#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int findLUSlength(string a, string b) {
        if (a==b) return -1;
        else return a.length()>b.length() ? a.length():b.length();
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}