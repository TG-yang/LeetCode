#include <iostream>
#include<string>
#include<vector>

using namespace std;



class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string mys;
        int result;
        int num = 0;
        int number = 0;

        while(number != s.size()){
            string::iterator temp = find(mys.begin(),mys.end(),s[number]);
            if(temp != mys.end())
                mys = string(temp + 1,mys.end());
            mys += s[number];
            num = (num > mys.size())? num : mys.size();
            ++number;
        }

        return num;

    }
};


int main() {
    Solution*So = new Solution();
    cout<<So->lengthOfLongestSubstring("abcazbcbb");
    return 0;
}