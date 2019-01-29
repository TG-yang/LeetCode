#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {

        int lens = s.size();
        int i = 0;
        int posi = -1;
        while(i < s.size()){

            size_t pos = t.find(s[i],posi + 1);
            if(pos == string::npos)
                return false;
            ++i;
            posi = pos;
        }

        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}