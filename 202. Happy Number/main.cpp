#include <iostream>
#include <set>

using namespace std;


class Solution {
public:
    bool isHappy(int n) {
        if(n<=0){
            return false;
        }
        set<int> mul;

        while(!mul.count(n)){
            mul.insert(n);
            int sum=0;
            while(n){
                sum+=(n%10)*(n%10);
                n/=10;
            }
            if(sum==1){
                return true;
            }
            n=sum;
        }
        return false;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}