#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isStrobogrammatic(string num) {
        if (num.empty()) {
            return false;
        }
        unordered_map <char, char> mapping = {{'0', '0'}, {'1', '1'}, { '6', '9'}, {'8', '8'}, {'9', '6'}};
        int i = 0, j = num.size() - 1;
        while (i <= j) {
            if (mapping[num[i]] != num[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}