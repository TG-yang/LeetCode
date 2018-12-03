#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int size = triangle.size();
        if(size == 0) return 0;
        if(size == 1) return triangle[0][0];

        vector<int> sum = triangle[size - 1];

        for(int i = size - 2; i >= 0; --i){
            for(int j = 0; j < triangle[i].size(); ++j){
                sum[j] = min(triangle[i][j] + sum[j], triangle[i][j] + sum[j + 1]);
            }
        }
        return sum[0];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}