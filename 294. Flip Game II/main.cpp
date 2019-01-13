#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
private:
    unordered_map<string,bool> Memory_Map;

public:
    bool canWin(string s) {

        int len = s.size();
        if(len <= 1)
            return false;

        if(Memory_Map.find(s) != Memory_Map.end())
            return Memory_Map[s];

        for(int i = 0; i < len - 1; ++i){

            string temp = s;
            if(s[i] == '+' && s[i + 1] == '+'){
                temp[i] = '-';
                temp[i + 1] = '-';

                bool a = canWin(temp);

                if(!a){
                    Memory_Map[s] = true;
                    return true;
                }
            }
        }
        Memory_Map[s] = false;

        return false;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}