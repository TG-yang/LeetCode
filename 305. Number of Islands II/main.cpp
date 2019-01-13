#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> numIslands2(int m, int n, vector<pair<int, int>>& positions) {

        int count = 0;
        vector<vector<int>> posLands(m, vector<int>(n,0));
        vector<int> result;
        vector<int> link(m * n);
        for(int i = 0; i < m * n; ++i)
            link[i] = i;
        for(auto pos : positions){

            vector<pair<int,int>> directoin = {{1,0}, {-1,0}, {0,1}, {0,-1}};
            for(auto dir : directoin){

                int x = pos.first, y = pos.second;
                int newx = pos.first + dir.first, newy = pos.second + dir.second;

                if(newx < 0 || newx >= m || newy < 0 || newy >= n || !posLands[newx][newy])
                    continue;

                int land1 = n * x + y;
                int land2 = n * newx + newy;

                while(link[land1] != land1){
                    link[land1] = link[link[land1]];
                    land1 = link[land1];
                }
                while(link[land2] != land2){
                    link[land2] = link[link[land2]];
                    land2 = link[land2];
                }

                if(land1 != land2){
                    --count;
                    link[land2] = land1;
                }
            }

            posLands[pos.first][pos.second] = 1;
            result.push_back(++count);
        }

        return result;
    }
};

class Solution {
public:
    vector<int> numIslands2(int m, int n, vector<pair<int, int>>& positions) {
        vector<vector<int>> mp(m, vector<int>(n, 0));
        vector<int> result;
        int num = 0;
        vector<int> par(m*n);
        for(int i = 0; i < m*n; i++) par[i] = i;
        for(auto val: positions)
        {
            vector<pair<int, int>> dir{{1,0}, {-1,0}, {0,1}, {0,-1}};
            for(auto val2: dir)
            {
                int x =val.first, y =val.second, px =x+val2.first, py =y+val2.second;
                if(px<0 || px>=m || py<0 || py>=n || !mp[px][py]) continue;
                int par1 = x*n + y, par2 = px*n + py;
                while(par[par1] != par1) par[par1] = par[par[par1]], par1 = par[par1];
                while(par[par2] != par2) par[par2] = par[par[par2]], par2 = par[par2];
                if(par1 != par2) par[par2] = par1, num--;
            }
            mp[val.first][val.second] = 1;
            result.push_back(++num);
        }
        return result;
    }
};



int main() {
    Solution*solution;
    vector<pair<int,int>>positions = {{0,0},{0,1},{1,2},{2,1}};
    solution->numIslands2(3,3,positions);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}