#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        if(words.size() == 1) return {};
        sort(words.begin(),words.end(),[](string&a, string&b){
            return a.size() < b.size();
        });
        set<string>set1;
        vector<string>result;
        for (auto item : words) {
            if (isValid(set1, item)) {
                result.push_back(item);
            }
            set1.insert(item);
        }

        return result;
    }

private:
    bool isValid(set<string>&set1, string item){

        if(set1.empty())
            return false;
        int len = item.size();
        bool dp[len + 1];
        memset(dp,0,sizeof(dp));
        dp[0] = true;

        for(int i = 1; i <= len; ++i){
            for(int j = 0; j < i; ++j){
                if(dp[j] && set1.find(item.substr(j, i-j)) != set1.end()){
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[len];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}