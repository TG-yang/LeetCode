#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string str) {

        vector<string>res;
        string str1 = "";
        for(int i = 0; i < str.size(); ++i){

            if(str[i] == ' '){
                res.push_back(str1);
                str1 = "";
            }else{
                str1 += str[i];
            }
        }
        res.push_back(str1);

        if(pattern.size() != res.size())
            return false;

        int m = res.size();
        map<string,char>map1;
        map<char,string>map2;

        for(int i = 0; i < m; ++i){

            if(map1.find(res[i]) == map1.end()){
                map1[res[i]] = pattern[i];

            }else{
                if(map1[res[i]] != pattern[i])
                    return false;
            }

            if(map2.find(pattern[i]) == map2.end()){
                map2[pattern[i]] = res[i];
            }else{
                if(map2[pattern[i]] != res[i])
                    return false;
            }
        }

        return true;
    }
};

int main() {
    Solution*solution;
    solution->wordPattern("abba","dog cat cat dog");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}