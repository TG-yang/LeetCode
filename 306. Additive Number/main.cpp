#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isAdditiveNumber(string num) {

        int len = num.size();
        if(len < 3)
            return false;

        for(int i = 1; i <= len - 2; ++i){

            string num1 = num.substr(0,i);
            for(int j = i + 1; j <= len - 1; ++j){

                string num2 = num.substr(i, j - i);
                string num3 = num.substr(j);

                if(DFS(num1,num2,num3))
                    return true;

                if(num[i] == '0')
                    break;
            }
            if(num[0] == '0')
                break;
        }

        return false;
    }

    bool DFS(string num1,string num2,string num3){

        if(num3.size() == 0)
            return true;

        string sum = getSum(num1,num2);
        for(int i = 1; i <= num3.size(); ++i){

            string str = num3.substr(0,i);
            string next = num3.substr(i);

            if(str == sum && DFS(num2,str,next))
                return true;

            if(num3[0] == '0')
                break;
        }

        return false;

    }

    string getSum(string num1,string num2){

        int val, flag,len1,len2;
        len1 = num1.size();
        len2 = num2.size();
        flag = 0;

        string sum = "";

        while(len1 || len2){

            val = 0;
            if(len1 > 0)
                val += num1[len1 - 1] - '0', --len1;
            if(len2 > 0)
                val += num2[len2 - 1] - '0', --len2;

            sum += to_string((flag + val) % 10);
            flag = (flag + val) / 10;
        }

        if(flag)
            sum += "1";
        reverse(sum.begin(),sum.end());

        return sum;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}