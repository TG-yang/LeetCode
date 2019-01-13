#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> generatePossibleNextMoves(string s) {

        vector<string> result;
        if(s.size() < 2)
            return result;

        for(int i = 1; i < s.size(); ++i){

            if(s[i] == '+' && s[i - 1] == '+'){
                string temp = s;
                temp[i] = '-';
                temp[i - 1] = '-';
                result.push_back(temp);
            }
        }
        return result;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}