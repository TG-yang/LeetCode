#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>result;
        vector<string>oneResult;

        dfs(s,0,oneResult,result);

        return result;
    }

    void dfs(string s, int start, vector<string>&oneResult, vector<vector<string>>&result){
        if(start == s.size()){
            result.push_back(oneResult);
            return;
        }

        for(int i = start; i < s.size(); ++i){

            if(isPartition(s,start,i)){
                oneResult.push_back(s.substr(start, i - start + 1));
                dfs(s, i + 1, oneResult, result);
                oneResult.pop_back();
            }
        }
    }

    bool isPartition(string s, int start, int end){

        while(start < end){

            if(s[start] != s[end])
                return false;

            ++start;
            --end;
        }

        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}