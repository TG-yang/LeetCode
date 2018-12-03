#include <iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
//    string convert(string s, int numRows) {
//        cout<<"1";
//        string result;
//        if(numRows == 1)
//            return s;
//        if(numRows == 2){
//            string temp1,temp2;
//            for(int i = 0; i < s.size(); ++i){
//                if(i / 2 == 0)
//                    temp1 += s[i];
//                else
//                    temp2 += s[i];
//            }
//            result = temp1 + temp2;
//            return result;
//        }
//        int number = (numRows - 1) * 2;
//        int numberOfArray = s.size() / number;
//        vector<vector<char>> str;
//        cout<<"12";
//        for(int i = 0; i < numberOfArray + 1; ++i){
//            cout<<"12";
//            if(i != numberOfArray - 1 && numberOfArray > 0){
//                string temp = s.substr(i * number,number);
//                int tempNumber = 0;
//                while(tempNumber < number){
//                   if(tempNumber + 1 / numRows == 0)
//                       str[tempNumber].push_back(temp[tempNumber]);
//                   else{
//                       str[numRows - 1 - (tempNumber +1 ) % numRows].push_back(temp[tempNumber]);
//                   }
//                   ++tempNumber;
//                }
//            }else{
//                cout<<"12";
//                string temp = s.substr(i * number,s.size() - (i + 1) * number);
//                int tempNumber = 0;
//                while(tempNumber < number){
//                    if(tempNumber + 1 / numRows == 0)
//                        str[tempNumber].push_back(temp[tempNumber]);
//                    else{
//                        str[numRows - 1 - (tempNumber +1 ) % numRows].push_back(temp[tempNumber]);
//                    }
//                    ++tempNumber;
//                }
//            }
//        }
//        for(int i = 0; i < str.size(); ++i)
//            for(int j = 0; j < str[i].size(); ++j)
//                result += str[i][j];
//        return result;
//    }
//

    public:
        string convert(string s, int numRows) {
            vector<string> vecStrings;
            string result;
            for (int i = 0; i < numRows; ++i) {
                vecStrings.push_back("");
            }

            if (numRows == 1) {
                return s;
            }

            int total = 2 * (numRows - 1);
            for (int i = 0; i < s.size(); ++i) {
                int idx = i % total;
                if (idx > numRows - 1) {
                    idx = total - idx;
                }
                vecStrings[idx] += s[i];
            }
            for (int i = 0; i < numRows; ++i) {
                result += vecStrings[i];
            }

            return result;
        }
};

int main() {
    Solution*S = new Solution();

    std::cout << S->convert("PAYPALISHIRING",3) << std::endl;
    return 0;
}