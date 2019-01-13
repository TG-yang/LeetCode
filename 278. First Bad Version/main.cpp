#include <iostream>

using namespace std;


// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int mid;
        while (high>low)
        {
            mid = low + (high - low) / 2;
            if (isBadVersion(mid))
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        return high;
    }
};



int main() {

    Solution*s;
    s->firstBadVersion(5);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}