#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    int calculate(string s){
        stack<int> nums;
        int temp;
        char flag = '+';

        for(int i = 0; i < s.size(); ++i){

            char c = s[i];
            if(c >= '0' && c <= '9')
                temp = temp * 10 + (int)(c - '0');
            if((!(c >= '0' && c <= '9') && c!= ' ') || i == (s.size() - 1)){

                if(flag == '-')
                    nums.push(-1 * temp);
                else if(flag == '+')
                    nums.push(temp);
                else if(flag == '*'){
                    temp = temp * nums.top();
                    nums.pop();
                    nums.push(temp);
                }else if(flag == '/'){
                    temp = nums.top() / temp;
                    nums.pop();
                    nums.push(temp);
                }
                flag = s[i];
                temp = 0;
            }
        }
        int result = 0;
        while(!nums.empty()){
            result += nums.top();
            nums.pop();
        }

        return result;
    }
};

int main() {
    Solution*s;
    string str = " 3+5/2 ";
    s->calculate(str);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}