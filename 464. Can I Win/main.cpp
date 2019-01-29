#include <iostream>
#include <map>

using namespace std;


class Solution {
private:
    int maxn;
    map<int, bool> m;
public:
    bool canIWin(int maxChoosableInteger, int desiredTotal) {
        maxn = maxChoosableInteger;
        if(maxn >= desiredTotal) return true;
        if((1 + maxn) * maxn / 2 < desiredTotal) return false;
        return canWin(desiredTotal, 0);
    }
    bool canWin(int target, int visited) {
        if(m.find(visited) != m.end()) return m[visited];
        for(int i = 1; i <= maxn; i++) {
            int mask = (1 << i);
            if((mask & visited) == 0 && (i >= target || canWin(target - i, mask | visited) == false)) {
                m[visited] = true;
                return true;
            }
        }
        m[visited] = false;
        return false;
    }
};




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}