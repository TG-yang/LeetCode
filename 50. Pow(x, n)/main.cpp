#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0.0)
            return 1.0;
        else{
            if(n < 0){
                if(n == INT_MIN)
                    return 1.0 / (pow(x,INT_MAX) * x);
                else
                    return 1.0 / pow(x,-n);
            }else{
                if(n % 2 == 0){
                    double temp = pow(x, n / 2);
                    return temp * temp;
                }else{
                    double temp = pow(x, (n - 1) / 2);
                    return temp * temp * x;
                }
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}