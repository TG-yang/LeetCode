#include <iostream>

using namespace std;

class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {

        int maxResult = (D - B) * (C - A) + (G - E) * (H - F); // 总面积

        int left = max(A, E);
        int down = max(B, F);

        int right = min(G, C);

        int up = min(D, H);

        if(down >= up || left >= right)
            return maxResult;
        else
            return (maxResult - (right - left) * (up - down));
    }
};

int main() {
    Solution*s;
    s->computeArea(-2,-2,2,2,1,-3,3,-1);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}