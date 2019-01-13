#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string shortestPalindrome(string s) {

        if(s == "")
            return s;

        int length = s.size() - 1;

        while(length >= 0){

            string subString = s.substr(0,length + 1);

            if(isPali(subString))
                break;

            --length;
        }

        string pre = s.substr(length + 1);
        reverse(pre.begin(),pre.end());

        return pre + s;
    }

    bool isPali(string SubString){

        for(int i = 0, j = SubString.size() - 1; i <= j; ++i, --j){

            if(SubString[i] != SubString[j])
                return false;
        }

        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}