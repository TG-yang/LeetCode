#include <iostream>

using namespace std;

class Solution {
public:
    int numWays(int n, int k) {

        if(!k ||!n ) return 0;
        if(n == 1) return k;
        int diff = k*(k-1); //last two posts are different;
        int same = k; // last two posts are same.

        for(int i = 2; i < n; ++i){

            int newdiff = (k - 1) * (same + diff);
            int newsame = diff;

            diff = newdiff;
            same = newsame;
        }

        return diff + same;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}