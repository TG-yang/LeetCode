#include <iostream>

using namespace std;

int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n;
        while(low <= high)
        {
            int mid = (high-low)/2+low, val = guess(mid);
            if(val == 0) return mid;
            else val==-1?high=mid-1:low=mid+1;
        }
        return -1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}