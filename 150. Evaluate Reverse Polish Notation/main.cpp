#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> result;

        for(int i = 0; i < tokens.size(); ++i){
            if(tokens[i] == "-" || tokens[i] == "+" || tokens[i] == "*" || tokens[i] == "/"){

                int first = result.top();
                result.pop();
                int second = result.top();
                result.pop();
                int tmp;
                if(tokens[i] == "-")
                    tmp = second - first;
                else if(tokens[i] == "+")
                     tmp = second + first;
                else if(tokens[i] == "/")
                     tmp = second / first;
                else if(tokens[i] == "*")
                     tmp = second * first;

                result.push(tmp);
            }else{
                result.push(atoi(tokens[i].c_str()));
            }
        }

        return  result.top();
    }
};

int main() {

    vector<string>tokens;
    tokens.push_back("2");
    tokens.push_back("1");
    tokens.push_back("+");
    tokens.push_back("3");
    tokens.push_back("*");
    Solution*s;
    s->evalRPN(tokens);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}