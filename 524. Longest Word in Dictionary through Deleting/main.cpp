#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        map<int, set<string>>results;
        int Max = 0;
        findWord(s,d,results,Max);
        return Max == 0 ? "" : *results[Max].begin();
    }

private:
    void findWord(string s, vector<string>&d, map<int, set<string>>&results, int&Max){
        for(int i = 0; i < d.size(); ++i){
            int l = 0, len = d[i].size();
            string word = d[i];
            for(auto c : s){

                if(c == word[l]){
                    ++l;
                }
                if(l == len)
                    break;
            }
            if(l == len){
                Max = max(Max,len);
                results[len].insert(word);
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}