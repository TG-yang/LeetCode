#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {

        unordered_map<char,int>hash;
        int left = 0;
        int Max = 0;

        for(int i = 0; i < s.size(); ++i){

            hash[s[i]]++;
            while(hash.size() > k){

                --hash[s[left]];
                if(hash[s[left]] == 0)
                    hash.erase(s[left]);
                ++left;
            }

            Max = max(Max, i - left + 1);
        }

        return Max;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}