#include <iostream>
#include <cmath>
#include<sstream>
using namespace std;

class Solution {
public:
//    int myAtoi(string str) {
//        int start = 0;
//        long realNumber = 0;
//        int isPositive = 1;
//
//        while(isspace(str[start])){
//            ++start;
//        }
//        if(str[start] == '+' || str[start] == '-'){
//            if(str[start++] == '-')
//                isPositive = -1;
//        }
//        for(int i = start; i < str.size(); ++i){
//            int digit = str[i] - '0';
//            if (digit < 0 || digit > 9)
//                break;
//            realNumber = realNumber * 10 + digit;
//            if (realNumber > fabs(long(INT_MIN)))
//                break;
//            cout<<realNumber<< " "<<digit<<" "<<i<<endl;
//        }
//        realNumber*=isPositive;
//        if(realNumber > INT_MAX)
//            return INT_MAX;
//        if(realNumber < INT_MIN)
//            return INT_MIN;
//
//        return realNumber;
//    }
    int myAtoi(string str){
        int result;
        stringstream ss;
        ss << str;
        ss >> result;
        return result;
    }
};

int main() {
    Solution*S = new Solution();
    std::cout << S->myAtoi("")<< std::endl;
    return 0;
}