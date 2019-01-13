#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {

        map<char,int>map1;
        int a = 0,b = 0;
        for(int i = 0; i < secret.size(); ++i){

            if(map1.find(secret[i]) == map1.end()){
                map1[secret[i]] = 1;
            }else{
                ++map1[secret[i]];
            }

            if(secret[i] == guess[i])
                ++a;
        }

        for(int i = 0; i < guess.size(); ++i){
            if(map1.find(guess[i]) != map1.end() && map1[guess[i]] != 0){
                ++b;
                --map1[guess[i]];
            }
        }
        b = 0 > b - a? 0 : b - a;
        return to_string(a) + "A" + to_string(b) + "B";
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}