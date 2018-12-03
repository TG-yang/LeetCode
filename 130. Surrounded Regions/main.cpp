#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct POS{
    int x;
    int y;
    POS(int i, int j): x(i), y(j){}
};

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if(board.empty() || board[0].empty())
            return;

        int m = board.size();
        int n = board[0].size();

        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j) {

                if (board[i][j] == 'O') {

                    if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
                        bfs(board, i, j, m, n);
                }
            }
        }

        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
                else if(board[i][j] == '*')
                    board[i][j] = 'O';
            }
        }
    }

    void bfs(vector<vector<char>>& board, int i, int j, int m, int n){
        queue<POS*>q;
        board[i][j] = '*';
        POS* p = new POS(i,j);
        q.push(p);

        while(!q.empty()){
            POS* p = q.front();
            q.pop();

            if(p->x > 0 && board[p->x - 1][p->y] == 'O'){
                POS*up = new POS(p->x - 1, p->y);
                board[up->x][up->y] = '*';
                q.push(up);
            }
            if(p->x < m - 1 && board[p->x + 1][p->y] == 'O'){
                POS*down = new POS(p->x + 1, p->y);
                board[down->x][down->y] = '*';
                q.push(down);
            }
            if(p->y > 0 && board[p->x][p->y - 1] == 'O'){
                POS*left = new POS(p->x, p->y - 1);
                board[left->x][left->y] = '*';
                q.push(left);
            }
            if(p->y < n - 1 && board[p->x][p->y + 1] == 'O'){
                POS*right = new POS(p->x, p->y + 1);
                board[right->x][right->y] = '*';
                q.push(right);
            }
        }
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}