#include <iostream>
#include <map>
using namespace std;

class Solution {
    map<char,char>match{
            {'(',')'},
            {')','('},
            {'{','}'},
            {'}','{'},
            {'[',']'},
            {']','['},
    };
public:
    bool isValid(string s) {
        if(s.size() % 2 != 0)
            return false;
        string stack;
        int top = s.size() - 1;
        while(!s.empty()){
            stack += s.at(top);
            s.erase(top);
            --top;
            int len = stack.size();
            map<char,char>::iterator it = match.find(stack[len - 1]);
            if(it->second == stack[len - 2]){
                stack.erase(len - 1);
                stack.erase(len - 2);
            }
        }
        if(stack.size() == 0)
            return true;
        else
            return false;
    }
};

int main() {
    Solution*s = new Solution();
    string str = "[]{}[]";
    std::cout << s->isValid(str) << std::endl;
    return 0;
}