#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void wallsAndGates(vector<vector<int>>& rooms) {

        int m = rooms.size();

        if(m == 0)
            return;

        int n = rooms[0].size();
        vector<vector<int>> direction = {{0,1},{1,0},{-1,0},{0,-1}};

        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){

                if(rooms[i][j] == 0)
                    helper(rooms,i,j,m,n,direction,0);
            }
        }
    }

private:
    void helper(vector<vector<int>>&rooms,int i, int j, int m, int n, vector<vector<int>>&direction, int depth){

        if(i < 0 || i >= m || j < 0 || j >= n || depth > rooms[i][j])
            return;

        rooms[i][j] = depth;

        for(auto dir : direction){

            helper(rooms,i + dir[0], j + dir[1], m, n, direction, depth + 1);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}