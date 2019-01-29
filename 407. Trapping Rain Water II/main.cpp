#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        if(heightMap.size() == 0) return 0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> queue1;
        int row = heightMap.size(), col = heightMap[0].size();
        int ans = 0, Max = INT_MIN;
        vector<vector<int>>visited(row,vector<int>(col,0));

        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                if(!(i == 0 || j == 0|| i == row - 1 || j == col - 1)) continue;
                queue1.push(make_pair(heightMap[i][j], i * col + j));
                visited[i][j] = 1;
            }
        }
        vector<vector<int>>direction{{1,0},{-1,0},{0,1},{0,-1}};
        while (!queue1.empty()){
            auto val = queue1.top();queue1.pop();
            int height = val.first;
            int x = val.second / col, y = val.second % col;
            Max = max(Max,height);
            for(auto dir : direction){

                int newx = x + dir[0], newy = y + dir[1];
                if(newx >= row || newx < 0 || newy >= col || newy < 0 || visited[newx][newy]) continue;
                visited[newx][newy] = 1;
                if(heightMap[newx][newy] < Max) ans += Max - heightMap[newx][newy];
                queue1.push(make_pair(heightMap[newx][newy],newx * col + newy));
            }
        }
        return ans;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}