#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int> lengthToNums;
        int Max = 0;
        for(int i = 0; i < wall.size(); ++i){
            for(int j = 0; j < wall[i].size(); ++j){
                if(j != 0){
                    wall[i][j] += wall[i][j - 1];
                }
                lengthToNums[wall[i][j]]++;
                if(j != wall[i].size() - 1)
                    Max = max(Max,lengthToNums[wall[i][j]]);
            }
        }

        return wall.size() - Max;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}