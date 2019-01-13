#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int superPow(int a, vector<int>& b) {
        if(b.empty())
            return 1;
        a = a % 1337;
        int k = b.back();
        b.pop_back();

        return (superPow(superPow(a,b),10) * superPow(a,k)) % 1337;
    }

    int superPow(int a, int b){

        if(b == 0)
            return 1;

        int res = 1;
        for(int i = 1; i <= b; ++i){
            res = (res * a) % 1337;
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}