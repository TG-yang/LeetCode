#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> result(num1.size() + num2.size(),0);
        for(int i = 0; i < num1.size(); ++ i)
            for(int j = 0; j < num2.size(); ++ j)
                result[i + j] += (num1[num1.size() - i - 1] - '0') * (num2[num2.size() - j- 1] - '0');

        for(int i = 0 ; i < result.size() ; ++i){
            int temp = result[i] / 10;
            result[i] = result[i] % 10;
            result[i + 1] += temp;
        }
        string s = "";
        int i = result.size();
        while( --i >=0 &&result[i] == 0);
        if(i <0)
            s = "0";
        else{
            for(;i >= 0; --i)
                s += result[i] + '0';
        }
        return s;
    }
};




int main() {
    Solution*s = new Solution();
    string num1 = "2", num2 = "3";
    cout << s->multiply(num1,num2);
    return 0;
}