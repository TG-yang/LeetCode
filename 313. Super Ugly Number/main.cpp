#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<int> res(n); // 记录输出结果
        int k = primes.size();
        vector<int> pos(k, 0); // 记录每一个prime质数已经乘过的位置
        int i, j, temp;
        res[0] = 1; // 1是固定的起始位置
        for (i = 1; i < n; i++) {
            temp = INT_MAX;
            for (j = 0; j < k; j++) {
                temp = min(temp, res[pos[j]] * primes[j]);
            }
            for (j = 0; j < k; j++) {
                if (temp == res[pos[j]] * primes[j])
                    pos[j]++;
            }// 这个for循环是为了找出上一轮中所有的最小值，所有都加一，消除重复，否则下一轮最小还是它
            res[i] = temp;
        }

        return res[n-1];

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}