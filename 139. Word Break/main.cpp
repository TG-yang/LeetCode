#include <iostream>
#include<vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
private:
    vector<string>result;
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>unset;
        for(string&word : wordDict)
            unset.insert(word);
        vector<int>cache(s.size(), 0);

        return wordBreak(s,s.size(),0,unset,cache) == 1;
    }

    int wordBreak(string s, int n, int pos, unordered_set<string>&wordDict, vector<int>&cache){

        if(pos == n) return 1;
        if (cache[pos] != 0)return cache[pos]; //记忆化搜索

        for(int i = 1; i <= n - pos; ++i){
            string substr = s.substr(pos, i);

            if(wordDict.find(substr) != wordDict.end()){

                cache[pos] = wordBreak(s,n,pos + i,wordDict,cache);
                if(cache[pos] == 1)
                    return 1;
            }
        }

        return -1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}