#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        int lens = s.size();
        for(int i = 1; i <= lens/2; ++i){
            if(lens % i != 0) continue;
            if(helper(s,i))
                return true;
        }

        return false;
    }

private:
    bool helper(string s, int i){
        string str(s,0,i);
        for(int j = i; j < s.size(); j+=i){
            string temp = s.substr(j, i);
            if(temp != str)
                return false;
        }

        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}