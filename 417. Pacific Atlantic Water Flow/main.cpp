#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>>direction{{1,0},{-1,0},{0,1},{0,-1}};
class Solution {
public:
    void dfs(int n,int m,vector<vector<int>>& matrix,vector<vector<int>> &vis,int height,int x,int y){
        if(x<0||y<0||x>=n||y>=m||vis[x][y]||matrix[x][y]<height)return;
        vis[x][y]=1;
        for(auto dir : direction){
            int newx = x + dir[0];
            int newy = y + dir[1];
            dfs(n,m,matrix,vis,matrix[x][y],newx,newy);
        }
    }
    vector<pair<int, int>> pacificAtlantic(vector<vector<int>>& matrix) {
        if(matrix.empty())return {};
        int n=matrix.size(),m=matrix[0].size();
        vector<pair<int, int>>res;
        vector<vector<int>> pacific(n,vector<int>(m,0));
        vector<vector<int> >atlantic(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            dfs(n,m,matrix,pacific,0,i,0);
            dfs(n,m,matrix,atlantic,0,i,m-1);
        }
        for(int i=0;i<m;i++){
            dfs(n,m,matrix,pacific,0,0,i);
            dfs(n,m,matrix,atlantic,0,n-1,i);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(pacific[i][j]&&atlantic[i][j]){
                    res.push_back({i,j});
                }
            }
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}