#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int lens = s.length(), lenp = p.length();
        vector<vector<bool> > f(lens + 1);
        for(int i = 0; i <= lens; ++i){
            f[i].resize(lenp + 1);
        }
        f[0][0] = true;

        for(int i = 1; i <= lenp; ++i){
            if(p[i - 1] == '*')
                f[0][i] = true;
            else
                break;
        }

        for(int i = 1; i <= lens; ++i){
            for(int j = 1; j <= lenp; ++j){
                char charS = s[i - 1], charP = p[j - 1];
                if(charS == charP || charP == '?' || charP == '*')
                    f[i][j] = f[i][j] | f[i - 1][j - 1];
                if(charP == '*')
                    f[i][j] = f[i][j] | f[i - 1][j] | f[i][j - 1];
            }
        }
        return f[lens][lenp];
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}