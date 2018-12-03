#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> result;
        for(int i = 0; i < 1 << n; ++i){
            result.push_back(i ^ (i >> 1)); //数学公式 i ^ i/2，是一个格雷码对应的二进制数，存储时变成int(十进制)
        }
        return result;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}