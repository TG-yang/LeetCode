#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string findContestMatch(int n) {
        vector<string>ret(n);
        for(int i = 0; i < n; ++ i){
            ret[i] = to_string(i + 1);
        }
        while (n){
            for(int i = 0; i < n/2; ++i){
                ret[i] = '(' + ret[i] + ',' + ret[n - i - 1] + ')';
            }
            n /= 2;
        }

        return ret[0];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}