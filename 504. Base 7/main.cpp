#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        if(num < 0)
            return "-" + convertToBase7(-num);
        if(num < 7)
            return to_string(num);
        return convertToBase7(num / 7) + convertToBase7(num % 7);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}