#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    string originalDigits(string s) {

        map<char,int> hash;
        string result = "";
        vector<int> number(10,0);
        for(int i = 0; i < s.size(); ++i){
            hash[s[i]]++;
        }

        number[0] = hash['z'];
        number[6] = hash['x'];
        number[2] = hash['w'];
        number[4] = hash['u'];
        number[8] = hash['g'];
        number[7] = hash['s'] - number[6];
        number[5] = hash['v'] - number[7];
        number[3] = hash['t'] - number[2] - number[8];
        number[1] = hash['o'] - number[0] - number[2] - number[4];
        number[9] = hash['i'] - number[5] - number[6] - number[8];

        for(int i = 0; i < 10; ++i){
            while(number[i] > 0){
                result += ( '0' + i);
                --number[i];
            }
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}