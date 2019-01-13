#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        map<char,int>res;

        for(int i = 0; i < s.size(); ++i){

            if(res.find(s[i]) == res.end())
                res[s[i]] = 1;
            else
                ++res[s[i]];
        }

        for(int i = 0; i < t.size(); ++i){

            if(res.find(t[i]) != res.end() && res[t[i]] != 0)
                --res[t[i]];
            else
                return false;
        }

        for(auto val : res) {
            if (val.second != 0)
                return false;
        }

        return true;


    }
};

int main() {

    Solution*s;
    string str = "anagram", t = "nagaram";
    s->isAnagram(str,t);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}