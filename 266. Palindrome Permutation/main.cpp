#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool canPermutePalindrome(string s) {

        unordered_map<char,int>hash;
        int lens = s.size();

        for(int i = 0; i < lens; ++i){
            if(hash.find(s[i]) == hash.end())
                hash[s[i]] = 1;
            else
                ++hash[s[i]];
        }

        int count = 0;

        if(lens % 2){
            for(auto val : hash){
                if(val.second % 2 == 1)
                    return false;
            }
        }else{
            for(auto val : hash){
                if(val.second % 2 == 1)
                    ++count;
            }
            if(count != 1)
                return false;
        }

        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}