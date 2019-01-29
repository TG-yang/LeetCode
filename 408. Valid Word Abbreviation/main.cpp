#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {

        int len1 = word.size();
        int len2 = abbr.size();
        int i = 0, k = 0;
        while(i < len2){

            if(word[k] == abbr[i]){
                ++i; ++k;
                continue;
            }
            int count = 0;
            if(abbr[i] == '0')
                return false;
            while(isdigit(abbr[i])){
                count = count * 10 + (abbr[i] - '0');
                ++i;
            }

            k += count;
            if(k > len1 || word[k] != abbr[i])
                return false;
        }
        return k == len1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}