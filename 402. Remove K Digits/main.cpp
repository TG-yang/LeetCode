#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {

        string result;
        int n = k, count = 0, len = num.size();
        for(auto val : num){

            while(!result.empty() && n > 0 && val < result.back()){
                result.pop_back();
                --n;
            }
            result.push_back(val);
        }

        while(result[count] == '0') ++count;

        result = result.substr(count, len - k - count);
        return !result.size()? "0" : result;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}