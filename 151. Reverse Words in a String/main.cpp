#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    void reverseWords(string &s) {

        if(s.size() == 0)
            return;

        if(s[0] == ' '){

            for(int i = 0; i < s.size();){
                if(s[0] == ' ')
                    s.erase(0,1);
                else
                    break;
            }
            if(s.size() == 0)
                return;
        }

        stack<string> stack1;
        string tmp = " ";
        for(int i = 0; i < s.size(); ++i){

            if(s[i] != ' '){
                tmp += s[i];
            }else{
                if(tmp != " ")
                    stack1.push(tmp);
                tmp = " ";
            }
        }

        if(stack1.empty())
            return;

        s = tmp;
        s = s.substr(1,s.size() - 1);
        while(!stack1.empty()){
            s += stack1.top();
            stack1.pop();
        }

        if(s[0] == ' '){

            for(int i = 0; i < s.size();){
                if(s[0] == ' ')
                    s.erase(0,1);
                else
                    break;
            }
        }

    }
};

int main() {
    Solution*s;
    string str = "the sky is blue";
    s->reverseWords(str);
    std::cout << str << std::endl;
    return 0;
}