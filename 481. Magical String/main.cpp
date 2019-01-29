#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int magicalString(int n) {
        if(n == 0) return 0;
        string magical{true, false, false};
        int nums = 1;
        int countIter = 3;
        int index = 2;
        bool flagValue = true;

        while (countIter < n){
            bool values = magical[index++];
            magical.push_back(flagValue);
            ++countIter;
            nums += flagValue;
            if(countIter >= n) break;
            if(values == false){
                magical.push_back(flagValue);
                ++countIter;
                nums += flagValue;
            }
            flagValue = !flagValue;
        }

        return nums;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}