#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        priority_queue<int>result;

        for(int i = 0; i < matrix.size(); ++i){
            for(int j = 0; j < matrix[i].size(); ++j){

                result.emplace(matrix[i][j]);
                if(result.size() > k)
                    result.pop();
            }
        }

        return result.top();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}