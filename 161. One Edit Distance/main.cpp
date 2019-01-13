#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isOneEditDistance(string s, string t) {

        int lens = s.size();
        int lent = t.size();
        if(s == t)
            return false;

        if(lens == lent){
            int diff = 0;
            for(int i = 0; i < lens; ++i){
                if(s[i] != t[i])
                    ++diff;
                if(diff > 1)
                    return false;
            }

        }else if(lens + 1 == lent){

            int diff = 0;
            for(int i = 0, j = 0; i < lens && j < lent;){

                if(s[i] == t[j])
                    ++i,++j;
                if(s[i] != t[j]){
                    ++diff;
                    ++j;
                }

                if(diff > 1)
                    return false;
            }
        }else if(lens == lent + 1){

            int diff = 0;
            for(int i = 0, j = 0; i < lens && j < lent;){

                if(s[i] == t[j])
                    ++i,++j;
                if(s[i] != t[j]){
                    ++diff;
                    ++i;
                }

                if(diff > 1)
                    return false;
            }
        }else{
            return false;
        }

        return true;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}