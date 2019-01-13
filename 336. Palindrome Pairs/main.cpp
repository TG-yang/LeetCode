#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
private:

    bool isPalindrome(string s){

        string s1 = s;
        reverse(s1.begin(),s1.end());

        if(s1 == s)
            return true;
        else
            return false;
    }
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {

        vector<vector<int>> result;
        map<string,int>map1;

        for(int i = 0; i < words.size(); ++i){
            map1[words[i]] = i;
        }
        for(int i = 0; i < words.size(); ++i){
            reverse(words[i].begin(),words[i].end());
            int len = words[i].size();
            for(int j = 0; j <= len; ++j){

                string strLeft = words[i].substr(0,j);
                string strRight = words[i].substr(j);

                if(map1.count(strLeft) && isPalindrome(strRight) && (map1[strLeft] != i) && (j < len))
                    result.push_back(vector<int>{map1[strLeft],i});
                if(map1.count(strRight) && isPalindrome(strLeft) && (map1[strRight] != i))
                    result.push_back(vector<int>{i,map1[strRight]});
            }
        }
        return result;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}