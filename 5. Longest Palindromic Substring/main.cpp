#include <iostream>
#include<string>

using namespace std;

class Solution {
public:
//    string longestPalindrome(string s) {
//        string::iterator iterString;
//        string mys1,mys2;
//        int number = 0;
//        while(number != s.size()){
//            mys1 += s[number];
//            iterString = find(mys1.begin(),mys1.end(),s[number]);
//            if(iterString != mys1.end()){
//                string temp(iterString,mys1.end());
//                string::iterator itertempBegin = temp.begin();
//                string::iterator itertempEnd = temp.end() - 1;
//
//                while(itertempBegin <= itertempEnd){
//                    if(*itertempBegin != *itertempEnd){
//                        itertempEnd = temp.end() - 1;
//                        temp = string(itertempBegin,itertempEnd);
//                    }
//                    cout<<temp<<endl;
//                    ++itertempBegin;
//                    --itertempEnd;
//                }
//
//                mys2 = (mys2.size() <= temp.size())? temp : mys2;
//            }
//            ++number;
//        }
//        if(mys2.size() == 0)
//            mys2[0] = s[0];
//
//        return mys2;
//    }
//
    string longestPalindrome(string s) {
        if(s.size() == 0)
            return s;
        string resultString;
        int start = 0, end = 1;
        int subStringLength = 0;
        for(int i = 1; i < s.size(); ++i){
            // 偶数回文遍历的方式，abba这类回文从中心向两边遍历
            start = i - 1;
            end = i;
            while(start >= 0 && end <= s.size() && s[start] == s[end]){
                --start;
                ++end;
            }
            subStringLength = end - start - 1;
            if(subStringLength >= resultString.size())
                resultString = s.substr(start + 1, subStringLength);
            // 奇数回文遍历方式 abcba这种方式，中心点start=i-1, end = i+1
            start = i - 1;
            end = i + 1;
            while(start >= 0 && end <= s.size() && s[start] == s[end]){
                --start;
                ++end;
            }
            subStringLength = end - start - 1;
            if(subStringLength >= resultString.size())
                resultString = s.substr(start + 1, subStringLength);
        }
        if(resultString.size() == 0)
            resultString = s[0];
        return resultString;
    }
};

int main() {
    Solution*s = new Solution();
    string string1 = "bb";
    std::cout << s->longestPalindrome(string1) << std::endl;
    return 0;
}