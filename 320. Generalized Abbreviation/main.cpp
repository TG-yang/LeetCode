#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> generateAbbreviations(string word) {

        vector<string> result;
        helper(word,result,"",false,0);
        return result;
    }

private:
    void helper(string&word, vector<string>& result, string curStr, bool prevNum, int i){

        if(i == word.length()){
            result.push_back(curStr);
            return;
        }

        helper(word,result,curStr + word[i], false, i + 1);

        if(!prevNum){

            for(int len = 1; len + i <= word.length(); ++len){

                helper(word,result,curStr + to_string(len), true, i + len);
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}