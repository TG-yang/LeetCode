#include <iostream>
#include<vector>
using namespace std;

//class Solution {
//public:
//    string intToRoman(int num) {
//        vector<int> number;
//        int roman[7] = {1000,500,100,50,10,5,1};
//        char romanChar[7] = {'M','D','C','L','X','V','I'};
//        int romanNumber[7] = {0}, romanFinalNumber[7] = {0};
//        string result = "";
//        int i = 0;
//        while(num > 0){
//            romanNumber[i] = num / roman[i];
//            num %= roman[i];
//            ++i;
//        }
//        while(i > 0){
//            if(romanNumber[i] == 4) {
//                romanFinalNumber[i] = -1;
//                romanNumber[i - 1] = 1 + romanNumber[i - 1];
//            }
//            else{
//                romanFinalNumber[i] = romanNumber[i];
//                romanFinalNumber[i - 1] = romanNumber[i - 1];
//            }
//            --i;
//        }
//        for(int j = 0; j < 7; ++j){
//            if(romanFinalNumber[j] == -1)
//                result.insert(result.begin(),romanChar[j]);
//            else{
//                for(int m = 0; m < romanFinalNumber[j]; ++m){
//                    result += romanChar[j];
//                }
//            }
//        }
//        return result;
//    }
//};IXCMMMDDLLVV
class Solution
{
public:
    string intToRoman(int num)
    {
        int romanNumber[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string result = "";
        for(int i = 0; num > 0; ++i){
            int temp = num / romanNumber[i];
            for(int j = 0; j < temp; ++j){
                result += roman[i];
            }
            num %= romanNumber[i];
        }
        return result;
        for(int i = 0; num > 0; num %= romanNumber[i], ++ i)
           for(int j = 0, k = num / romanNumber[i]; j < k; ++ j)
               result += roman[i];
        return result;
   }
};
int main() {
    Solution*s = new Solution();
    std::cout << s->intToRoman(3999) << std::endl;
    return 0;
}