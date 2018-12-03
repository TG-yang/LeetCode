#include <iostream>
#include <vector>
#include <map>
using  namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        if(words.empty() || s.empty())
            return vector<int>();
        map<string,int>countOfword;
        map<string,int>countOftemp;
        vector<int>result;
        int wordsSize = words.size();
        int wordSize = words.at(0).size();
        if(s.size() < wordsSize * wordSize)
            return vector<int>();
        for(int i = 0; i < wordsSize; ++i)
            ++countOfword[words.at(i)];
        for(int i = 0; i <= s.size() - wordsSize * wordSize; ++i){
            countOftemp.clear();
            int j;
            for(j = 0; j < wordsSize; ++j){
                string word = s.substr(i + j * wordSize, wordSize);
                if(countOfword.find(word) != countOfword.end()){
                    ++countOftemp[word];
                    if(countOftemp[word] > countOfword[word])
                        break;
                } else
                    break;
            }
            if(j == wordsSize)
                result.push_back(i);
        }
        return result;
    }
};

int main() {
    Solution*s = new Solution();
    vector<string> words ={"a","a"};
    s->findSubstring("a",words);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}