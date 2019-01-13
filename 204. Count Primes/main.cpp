#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int result = 0;

        if(n < 2)
            return 0;

        for(int i = 2; i <= n; ++i){

            if(i == 2 || i == 3 || i == 5 || i == 7)
                ++result;
            else if(i % 2 != 0 && (sqrt(i) * sqrt(i)) != i){
                ++result;
            }
        }

        return result;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}