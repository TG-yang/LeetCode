#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        if(s.size() == 0)
            return "";

        string word = "";
        int i, j;
        for(i = 0, j = 0; i < s.size(); ++i){
            if(s[i] == ' '){
                reverse(s.begin() + j, s.begin() + i);
                j = i + 1;
            }
        }
        reverse(s.begin() + j, s.begin() + i);
        return s;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}