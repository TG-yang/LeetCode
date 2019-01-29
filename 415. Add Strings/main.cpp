#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        string result = "";
        int add = 0;
        int m = num1.size() - 1, n = num2.size() - 1;

        while (m >= 0 || n >= 0){

            if(m >= 0 && n >= 0){
                add += ((num1[m] - '0') + (num2[n] - '0'));
                result += to_string(add % 10);
                add /= 10;
                --m; --n;
            }else if(m >= 0){
                add += (num1[m] - '0');
                result += to_string(add % 10);
                add /= 10;
                --m;
            }else if(n >= 0){
                add += (num2[n] - '0');
                result += to_string(add % 10);
                add /= 10;
                --n;
            }
        }
        if(add == 1){
            result += to_string(add);
        }
        reverse(result.begin(),result.end());

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}