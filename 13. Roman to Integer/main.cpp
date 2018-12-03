#include <iostream>
#include <vector>
#include<map>

using namespace std;

//class Solution {
//public:
//    int romanToInt(string s) {
//
//        int i = 0, j = 0;
//        int result = 0;
//        bool isAdd = false;
//        vector<int> myVector;
//        while(i < s.size()){
//           switch (s[i]){
//               case 'I':
//                   myVector.push_back(1);
//                   break;
//               case 'V':
//                   myVector.push_back(5);
//                   break;
//               case 'X':
//                   myVector.push_back(10);
//                   break;
//               case 'L':
//                   myVector.push_back(50);
//                   break;
//               case 'C':
//                   myVector.push_back(100);
//                   break;
//               case 'D':
//                   myVector.push_back(500);
//                   break;
//               case 'M':
//                   myVector.push_back(1000);
//                   break;
//           }
//           ++i;
//        }
//        if(myVector.size() == 1)
//            return myVector.at(0);
//
//        while(j < myVector.size() - 1){
//            if(myVector.at(j) < myVector.at(j + 1)){
//                result += myVector.at(j + 1) - myVector.at(j);
//                if(j == myVector.size() - 3)
//                    isAdd = true;
//                j+=2;
//            }else{
//                result += myVector.at(j);
//                if(j == myVector.size() - 2)
//                    isAdd = true;
//                ++j;
//            }
//        }
//        if(isAdd)
//            result += myVector.at(myVector.size() - 1);
//        return result;
//    }
//};
class Solution {
private:
    map<char, int> digits = {
            { 'P',0},
            { 'I',1 },
            { 'V',5 },
            { 'X',10 },
            { 'L',50 },
            { 'C',100 },
            { 'D',500 },
            { 'M',1000 },
    };
public:
    int romanToInt(string s) {
        int result = 0;
        s += 'P';
        for(int i = 0; i < s.size(); ++i){
            if(digits[s[i]] < digits[s[i + 1]])
                result -= digits[s[i]];
            else
                result += digits[s[i]];
        }

        return result;
    }

};

int main() {
    Solution*s = new Solution();
    std::cout << s->romanToInt("DCXXI")<< std::endl;
    return 0;
}