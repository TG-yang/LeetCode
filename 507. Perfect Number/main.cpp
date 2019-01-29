#include <iostream>
#include <set>
#include <cmath>

using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1 || num <= 0)
            return false;

        set<int>divisors;
        for(int i = sqrt(num); i <= num; ++i){
            if(i == num)
                divisors.insert(1);
            else{
                if(num % i == 0){
                    divisors.insert(i);
                    divisors.insert(num / i);
                }
            }
        }
        int sum = 0;
        for(auto val : divisors){
            sum += val;
        }
        return sum == num;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}