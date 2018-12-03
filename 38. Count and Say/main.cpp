#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if(n == 0)
            return "";
        if(n == 1)
            return "1";
        if(n == 2)
            return "11";
        if(n == 3)
            return "21";
        int i = 4;
        string count = "1211";
        string say = "";
        while(i < n){
            int numberOfOne = 1;
            for(int j = 0; j < count.size() - 1; ++j){
                if(count[j] - '0' == count[j + 1] - '0')
                    ++numberOfOne;
                else{
                    say += to_string(numberOfOne) + to_string(count[j] - '0');
                    numberOfOne = 1;
                }
//                if(count[count.size() - 1] - '0' != count[count.size() - 2] - '0' &&
//                        j == count.size() - 1){
//                    say += to_string(numberOfOne) + to_string(count[j] - '0');
//                }
            }
            say += to_string(numberOfOne) + to_string(count[count.size() - 1] - '0');
            count = say;
            say = "";
            ++i;
        }
        return count;
    }
};

int main() {
    Solution*s = new Solution();
    std::cout << s->countAndSay(6) << std::endl;
    return 0;
}