#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size() == 0)
            return 0;
        int i = s.size() - 1;
        int result = 0;
        while(i >= 0 && s[i] == ' ')
            --i;
        while(i >= 0 && s[i] != ' '){
            --i;
            ++result;
        }
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}