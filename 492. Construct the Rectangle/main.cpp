#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> constructRectangle(int area) {
        if(area == 0)
            return {0,0};
        int L = sqrt(area);
        if(L * L == area){
            return {L,L};
        }
        int W = L;
        L += 1;
        while (1){
            if(W * L > area){
                --W;
            }else if(W * L < area){
                ++L;
            }else{
                return {L,W};
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}