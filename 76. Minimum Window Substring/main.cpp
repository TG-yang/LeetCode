#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int map[256] = {0};
        bool hash[256] = {false};
        int slen = s.length(), tlen = t.length();

        if(!slen || !tlen) return "";
        int left,right,midleft,count,leng;
        left = right = midleft = count  = 0;
        leng = slen + 1;
        //用于存次数
        for(char ch : t){
            ++map[ch];
            hash[ch] = true;
        }

        while(right < slen){

            if(hash[s[right++]] && --map[s[right - 1]] >= 0)
                ++count;
            while(count == tlen){
                if(right - left < leng){
                    leng = right - left;
                    midleft = left;
                }
                if(hash[s[left++]] && ++map[s[left - 1]] > 0)
                    --count;
            }
        }
        if(leng > slen) return "";
        return s.substr(midleft,leng);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}