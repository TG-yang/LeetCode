#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        if(n == 1)
            return true;

        for(int i = 0, j = n - 1; i < n - 1 && j >= 0 && i <=j; ++i,--j){
                while(isalnum(s[i]) == false && i < j)
                    ++i;
                while(isalnum(s[j]) == false && i < j)
                    --j;
                if(toupper(s[i]) != toupper(s[j]))
                    return false;
        }

        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}