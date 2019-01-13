#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<int>nums;
        stack<int>signs;

        int num = 0, sign = 1, res = 0;

        for(auto c : s){
            if(c == ' ')
                continue;
            if(isdigit(c)){
                num = num * 10 + (int)(c - '0');
            }else{
                res += num * sign;
                num = 0;
                if(c == '+') sign = 1;
                if(c == '-') sign = -1;
                if(c == '('){
                    nums.push(res);
                    signs.push(sign);
                    res = 0;
                    sign  = 1;
                }
                if(c == ')'){
                    res = res * signs.top() + nums.top();
                    nums.pop();
                    signs.pop();
                }
            }
        }
        res += num * sign;

        return res;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}