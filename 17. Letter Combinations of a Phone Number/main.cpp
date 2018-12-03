#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>result1;
        if(digits.size() == 0)
            return result1;
        string dTol[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> result({""});
        for(int i = 0; i < digits.size(); ++i){
            vector<string> temp;
            for(int j = 0; j < result.size(); ++j){
                for(int k = 0; k < dTol[digits[i] - '0'].size();++k){
                    temp.push_back(result[j] + dTol[digits[i] - '0'][k]);
                }
            }
            result = temp;
        }
        for(int i = 0; i < result.size(); ++i)
            cout << result.at(i) << endl;
        return result;
    }
};

int main() {
    Solution*s = new Solution();
    string input = "23";
    s->letterCombinations("23");

    return 0;
}