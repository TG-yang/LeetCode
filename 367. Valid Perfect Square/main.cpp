#include <iostream>

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {

        int start = 0, end = num;

        while(start <= end){

            int mid = (end + start) / 2;

            if(mid * mid == num)
                return true;
            else if(mid * mid > num){
                end = mid;
            }else{
                start = mid;
            }
        }

        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}