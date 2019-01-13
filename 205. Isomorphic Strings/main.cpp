#include <iostream>
#include <map>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())
            return false;

        map<char,char>sMap;
        map<char,char>tMap;
        int sValue = 0, tValue = 0;
        string sStr = "", tStr = "";

        for(int i = 0; i < s.size(); ++i){
            if(sMap.find(s[i]) == sMap.end()){
                sMap.insert(make_pair(s[i],sValue));
                ++sValue;
            }
            if(tMap.find(t[i]) == tMap.end()){
                tMap.insert(make_pair(t[i],tValue));
                ++tValue;
            }

            sStr += sMap[s[i]];
            tStr += tMap[t[i]];
        }

        return sStr == tStr;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}