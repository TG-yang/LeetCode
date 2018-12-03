#include <iostream>
#include <string>
#include <vector>

using namespace std;

//class Solution {
//public:
//    int minCut(string s) {
//        int result = INT_MAX;
//        vector<string>oneResult;
//        dfs(s,0,result,oneResult);
//        return result;
//    }
//
//    void dfs(string s, int start, int&result, vector<string>&oneResult){
//
//        if(result < oneResult.size() - 1)
//            return;
//
//        if(start == s.size()){
//            if(result > oneResult.size() - 1)
//                result = oneResult.size() - 1;
//            return;
//        }
//
//        for(int i = start; i <s.size(); ++i){
//
//            if(isPalindrome(s,start,i)){
//                oneResult.push_back(s.substr(start, i - start + 1));
//                dfs(s,i + 1,result,oneResult);
//                oneResult.pop_back();
//            }
//        }
//    }
//
//    bool isPalindrome(string s, int start, int end){
//
//        while(start < end){
//
//            if(s[start] != s[end])
//                return false;
//            ++start;
//            --end;
//        }
//        return true;
//    }
//};

class Solution {
public:
    int minCut(string s)
    {
        vector<vector<int>> dp;
        vector<int> temp;
        for(int i=0;i<s.size();i++)
            temp.push_back(0);

        for(int i=0;i<s.size();i++)
            dp.push_back(temp);

        vector<int> cut(s.size()+1,0);

        for(int i=s.size()-1;i>=0;i--)
        {
            cut[i]=INT_MAX;
            for(int j=i;j<s.size();j++)
            {
                if(s.at(i)==s.at(j)&&(j-i<=1||dp[i+1][j-1]==1))
                {
                    dp[i][j]=1;
                    cut[i]=min(1+cut[j+1],cut[i]);
                }
            }
        }
        return cut[0]-1;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}