#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
private:
    vector<string>result;
public:
    vector<string> restoreIpAddresses(string s) {

        addDot(s,"",3);
        return result;
    }

private:
    void addDot(string s, string oneResult, int k){

        if(s.size() <= k)
            return;
        if(s.size() > 3 * (k + 1))
            return;
        if(k == 0){
            if((s[0] == '0' && s.size() > 1 )|| (int)atoi(s.c_str()) >= 256)
                return;

            result.push_back(oneResult + "." + s);
            return;
        }

        for(int i = 1; i <= s.size(); ++i){
            string tmp = s.substr(0,i);
            if((int)atoi(tmp.c_str()) < 256){
                string str = s.substr(i);

                if(oneResult.size() > 0)
                    tmp = oneResult + "." + tmp; //*

                addDot(str,tmp,k - 1);

                if(s[0] == '0')
                    break;

            }else{
                break;
            }
        }
    }
};

int main() {
    Solution*s;
    string str = "25525511135";
    s->restoreIpAddresses(str);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}