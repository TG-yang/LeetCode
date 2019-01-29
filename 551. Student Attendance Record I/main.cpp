#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int A = 0;
        bool L = false;

        for(int i = 0; i < s.size(); ++i)
            if(s[i] == 'A')
                ++A;

        for(int i = 2; i < s.size(); ++i)
            if(s[i] == 'L' && s[i] == s[i - 1] && s[i] == s[i - 2])
            {
                L = true;
                break;
            }

        return !((A > 1) || L);

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}