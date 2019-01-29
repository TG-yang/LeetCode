#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        set<char>set1 = {'Q','W','E','R','T','Y','U','I','O','P','q','w','e','r','t','y','u','i','o','p'};
        set<char>set2 = {'A','S','D','F','G','H','J','K','L','a','s','d','f','g','h','j','k','l'};
        set<char>set3 = {'Z','X','C','V','B','N','M','z','x','c','v','b','n','m'};
        vector<string>res;
        if(words.size() == 0)
            return res;

        for(auto word : words){
            int line = 0, i = 0;
            for(; i < word.size(); ++i){
                if(set1.find(word[i]) != set1.end()){
                    if(line == 1 || line == 0){
                        line = 1;
                    }else{
                        break;
                    }
                }else if(set2.find(word[i]) != set2.end()){
                    if(line == 2 || line == 0){
                        line = 2;
                    } else{
                        break;
                    }
                }else if(set3.find(word[i]) != set3.end()){
                    if(line == 3 || line == 0){
                        line = 3;
                    }else{
                        break;
                    }
                }else{
                    break;
                }
            }
            if(i == word.size())
                res.push_back(word);
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}