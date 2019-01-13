#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int nthUglyNumber(int n) {

        vector<int>ulgyVec = {1};
        int th2 = 0, th3 = 0, th5 = 0;
        while(--n > 0){

            int val = min(ulgyVec[th2]*2,min(ulgyVec[th3]*3,ulgyVec[th5]*5));
            ulgyVec.push_back(val);

            while(ulgyVec[th2] * 2 <= val) ++th2;
            while(ulgyVec[th3] * 3 <= val) ++th3;
            while(ulgyVec[th5] * 5 <= val) ++th5;

        }

        return ulgyVec.back();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}