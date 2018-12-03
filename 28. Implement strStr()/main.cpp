#include <iostream>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() == 0 && needle.size() == 0)
            return 0;
        if(needle.size() == 0 && haystack.size() > 0)
            return 0;
        if( haystack.size() < needle.size())
            return  -1;
        int lenSub = needle.size();
        int count = -1;
        for(int i = 0; i < haystack.size() - lenSub; ++ i){
            string sub = haystack.substr(i,lenSub);
            if(sub == needle){
                count = i;
                break;
            }
        }
        return count;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}