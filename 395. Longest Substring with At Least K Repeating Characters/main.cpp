#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int longestSubstring(string s, int k) {

        unordered_map<char,int> hash;
        for(auto c : s)
            hash[c]++;

        char seg = ' ';

        for(auto c : s){
            if(hash[c] < k)
                seg = c;
        }
        if(seg == ' ')
            return s.size();

        int maxLength = 0;
        vector<string> vector1;
        int start = 0;
        //using to split the string with the seg;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == seg){
                string str = s.substr(start,i);
                if(str.size() >= k)
                    vector1.push_back(str);
                if(i + 1 < s.size())
                    start = i + 1;
            }else if(i == s.size() - 1){
                string str = s.substr(start);
                if(str.size() >= k)
                    vector1.push_back(str);
            }
        }

        for(auto str : vector1){
            maxLength = max(maxLength, longestSubstring(str, k));
        }
        return maxLength;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}