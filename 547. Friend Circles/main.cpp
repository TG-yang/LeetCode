#include <iostream>
#include <vector>
#include <queue>

using namespace std;


class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        int cnt = 0;
        for(int i = 0; i < M.size(); ++i){
            for(int j = 0; j < M[0].size(); ++j){
                if(M[i][j] == 1){
                    ++cnt;
                    queue<int>queue1;
                    queue1.push(i);
                    M[i][j] = 0;
                    while (!queue1.empty()){
                        int val = queue1.front();queue1.pop();
                        for(int n = 0; n < M[0].size(); ++n){
                            if(M[val][n]){
                                queue1.push(n);
                                M[val][n] = 0;
                            }
                        }
                    }
                }
            }
        }

        return cnt;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}