#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {

        string vowelString = "";
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
               s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                vowelString += s[i];
        }

        reverse(vowelString.begin(),vowelString.end());
        int j = 0;
        for(int i = 0; i <s.size(); ++i){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
               s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                s[i] = vowelString[j++];
        }

        return s;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}