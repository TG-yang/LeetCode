#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string splitLoopedString(vector<string>& strs) {
        string ret = "a", s = "";
        for(int i = 0; i < strs.size(); ++i){
            string temp = strs[i];
            reverse(temp.begin(),temp.end());
            s += max(temp,strs[i]);
        }

        for(int i = 0, st = 0; i <strs.size(); st += strs[i++].size()){
            string s1 = strs[i], s2 = strs[i];
            reverse(s1.begin(),s1.end());
            string body = s.substr(st + s1.size()) + s.substr(0,st);
            for(int j = 0; j < s1.size(); ++j){
                if(s1[j] >= ret[0])
                    ret = max(ret,s1.substr(j) + body + s1.substr(0,j));
                if(s2[j] >= ret[0])
                    ret = max(ret,s2.substr(j) + body + s2.substr(0,j));
            }
        }

        return ret;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}