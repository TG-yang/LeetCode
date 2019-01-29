#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int fib(int N) {
        vector<int>fibVec{0,1};
        for(int i = 2; i <= N; ++i){
            int temp = fibVec[i - 1] + fibVec[i - 2];
            fibVec.push_back(temp);
        }

        return fibVec[N];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}