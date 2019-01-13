#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {

        unordered_map<char,pair<char,int>>hash;
        for(int i = 0; i < t.size(); ++i){

            if(hash.find(t[i]) != hash.end()){
                hash[t[i]].first = t[i];
                ++hash[t[i]].second;
            }else
                hash[t[i]].second = 1;
        }

        for(int i = 0; i < s.size(); ++i){

            --hash[s[i]].second;
            if(hash[s[i]].second == 0)
                hash.erase(s[i]);
        }

        return (*hash.begin()).first;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}