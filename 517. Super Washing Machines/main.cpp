#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int sum = 0, size = machines.size();
        for (int i = 0; i < size; ++i) sum += machines[i];
        if (sum % size != 0) return -1;                      //如果不能均分，则返回-1。
        int target = sum / size, totalstep = 0, balance = 0;
        for (int i = 0; i < size; ++i) {                      //对数组中每个元素遍历
            balance += machines[i] - target;                  //找出经过该元素的最大流量
            totalstep = max(totalstep, max(machines[i] - target, abs(balance)));
        }
        return totalstep;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}