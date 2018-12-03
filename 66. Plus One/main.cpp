#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        int digit = 1;
        for(;i >= 0; --i){
            digits[i] += digit;
            if(digits[i] >= 10){
                digits[i] -= 10;
                digit = 1;
            }else{
                digit = 0;
                break;
            }
        }
        if(i == -1 && digit == 1)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}