#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        long long l_numerator = numerator;
        long long l_denominator = denominator;
        long long rest = 0;

        string result = "";
        unordered_map<long long,int>u_map;
        bool is_positive = true;

        if(numerator == 0) return "0";
        if(denominator == 0) return  result;
        if(numerator == INT_MIN && denominator == -1) return "2147483648";
        //**************
        if(l_numerator < 0){
            is_positive = 1 - is_positive;
            l_numerator = -l_numerator;
        }
        if(l_denominator < 0){
            is_positive = 1 - is_positive;
            l_denominator = -l_denominator;
        }

        rest = l_numerator % l_denominator;
        if(rest == 0){
            result = to_string(l_numerator / l_denominator);
        }else{
            result = to_string(l_numerator / l_denominator) + ".";
        }
        int index = result.size();

        while(rest != 0 && u_map.find(rest) == u_map.end()){
            u_map[rest] = index;
            rest *= 10;

            result += to_string(rest / l_denominator);
            rest = rest % l_denominator;
            ++index;
        }

        if(rest != 0){
            result.insert(u_map[rest],1,'(');
            result.insert(result.size(),1,')');
        }
        if(is_positive)
            return result;
        else
            return "-" + result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}