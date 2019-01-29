#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        S = helper(S);
        if(S.size() <= K)
            return S;
        string result = "";
        int start = S.size() % K;
        if(start != 0){
            result += S.substr(0, start);
        }

        for(int i = start; i < S.size(); i += 4){
            if(i != 0)
                result += "-";
            result += S.substr(i, K);
        }

        return result;
    }

private:
    string helper (string S){
        string result = "";
        for(int i = 0; i < S.size(); ++i){
            if(S[i] != '-'){
                if(S[i] >= 'a' && S[i] <= 'z'){
                    result += (S[i] - 32);
                }
            }
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}