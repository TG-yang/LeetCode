#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int len = matrix.size();
        for(int i = 0; i < len; ++i)
            for(int j = i + 1; j < len; ++j) //只让对角线以上部分进行旋转
                swap(matrix[i][j],matrix[j][i]);
        for(int i = 0; i < len; ++i)
            reverse(matrix[i].begin(),matrix[i].end());
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}