#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    string helper(int num)
    {
        const static char* less_ten[] =
                { "", " One", " Two", " Three", " Four", " Five", " Six", " Seven", " Eight", " Nine" };

        const static char* less_twenty[] =
                { " Ten", " Eleven", " Twelve", " Thirteen", " Fourteen", " Fifteen", " Sixteen", " Seventeen", " Eighteen", " Nineteen" };

        const static char* less_hundred[] =
                { "", "", " Twenty", " Thirty", " Forty", " Fifty", " Sixty", " Seventy", " Eighty", " Ninety" };

        string s;

        if (num != 0)
        {
            //get hundredth, tenth, and single digit
            int hundred = num / 100;
            num %= 100;
            int tenth = num / 10;
            int single = num % 10;

            if (hundred)
                s = s + less_ten[hundred] + " Hundred";

            if (tenth)
            {
                if (tenth == 1)
                { //special handling, choose from less_twenty based on value of single
                    s += less_twenty[single];
                    return s;
                }
                else  s += less_hundred[tenth];

            }
            if (single)
                s += less_ten[single];
        }
        return s;
    }

    string numberToWords(int num)
    {
        const static char* unit[] = { "", " Thousand", " Million", " Billion", " Triliion" };
        int parts[5] = {0};
        for(int i  = 0; i < 5; ++i)
        {
            parts[i] = num % 1000;
            num /= 1000;
        }
        string s;
        for(int i = 0; i < 5; ++i)
        {
            if(parts[i] == 0) continue;
            s = helper(parts[i]) + unit[i] + s;
        }
        s = s.size() ? s.substr(1) : "Zero";//substr(1)是为了去掉s首位的空格
        return s;
    }
};

int main() {
    Solution*s;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}