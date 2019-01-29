#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string parseTernary(string expression) {
        cout << expression << endl;
        while (expression.size() > 1){
            int index = expression.find_last_of("?");
            string new_expression = "";
            if(index - 1 > 0){
                new_expression += expression.substr(0,index - 1);
            }
            new_expression += expression[index - 1] == 'T' ? expression[index + 1] : expression[index + 3];
            if(index + 5 < expression.size()){
                new_expression += expression.substr(index + 4);
            }
            expression = new_expression;
            cout << expression << " "<<index << endl;
        }
        return expression;
    }
};

int main() {
    Solution*solution;
    solution->parseTernary("T?T?F:5:3");

    std::cout << "Hello, World!" << std::endl;
    return 0;
}