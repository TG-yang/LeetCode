#include <iostream>

using namespace std;

class Solution {
public:
    int findComplement(int num) {
        long int flag = 1, res = 0;
        while (flag && flag <= num){
            int t = flag & num;
            if(t == 0){
                res |= flag;
            }
            flag = flag << 1;
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}