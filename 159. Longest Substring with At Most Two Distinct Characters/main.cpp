#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        unordered_map<char,int>hash;
        int max_lenght = 0;
        int start = 0, end = 0;

        while(end < s.size()){

            hash[s[end]]++;

            while(hash.size() > 2){

                hash[s[start]]--;
                if(hash[s[start]] == 0)
                    hash.erase(s[start]);
                ++start;
            }
            max_lenght = max(max_lenght,end - start + 1);
            ++end;
        }

        return max_lenght;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}