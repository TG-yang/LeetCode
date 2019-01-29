#include <iostream>
#include <string>
#include <istream>
#include <sstream>

using namespace std;

class Solution {
public:
    int countSegments(string s) {

        helper(s);

        if(s.size() == 0)
            return 0;

        int count = 0;
        for(int i = 0; i < s.size() - 1; ++i){
            if(s[i] == ' ' && s[i + 1] != ' ')
                ++count;
        }
        return count + 1;
    }

private:
    void helper(string&s){
        int i;
        for(i = 0; i < s.size(); ++i){
            if(s[i] != ' ')
                break;
        }
        s = s.substr(i, s.size() - i);

        for(i = s.size() - 1; i >= 0; --i){
            if(s[i] != ' ')
                break;
        }

        s = s.substr(0, i + 1);

    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}