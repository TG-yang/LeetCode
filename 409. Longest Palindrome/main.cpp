#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map<char,int> hash;

        for(auto c : s){
            hash[c]++;
        }
        int result = 0;
        int one = 0;

        for(auto val : hash){
            if(val.second % 2){
                result += val.second - 1;
                one = 1;
            }else{
                result += val.second;
            }
        }

        return result + one;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}