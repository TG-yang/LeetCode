#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size() <= 1)
            return true;
        if(islower(word[0]) || (isupper(word[0]) && islower(word[1]))){
            for(int i = 1; i < word.size(); ++i){
                if(!islower(word[i]))
                    return false;
            }
        }else{
            for(int i = 1; i < word.size(); ++i){
                if(!isupper(word[i]))
                    return false;
            }
        }

        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}