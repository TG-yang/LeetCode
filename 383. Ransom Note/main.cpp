#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char,int>unordered_map1;
        for(int i = 0; i < ransomNote.size(); ++i){

            if(unordered_map1.find(ransomNote[i]) == unordered_map1.end()){
                unordered_map1[ransomNote[i]] = 1;
            }else{
                ++unordered_map1[ransomNote[i]];
            }
        }

        for(int i = 0; i < magazine.size(); ++i){

            if(unordered_map1.find(magazine[i]) != unordered_map1.end()){
                --unordered_map1[magazine[i]];
                if(unordered_map1[magazine[i]] == 0)
                    unordered_map1.erase(magazine[i]);
            }
        }

        return unordered_map1.size() == 0;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}