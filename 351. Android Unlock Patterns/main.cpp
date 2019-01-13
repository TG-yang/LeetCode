#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<bool>visited;
    vector<vector<int>>hash;
public:
    int numberOfPatterns(int m, int n) {

        if(m < 1 || n < 1) return 0;
        visited.resize(10,false);
        visited[0] = true;
        hash.resize(10,vector<int>(10,0));

        hash[1][3] = hash[3][1] = 2;
        hash[1][7] = hash[7][1] = 4;
        hash[3][9] = hash[9][3] = 6;
        hash[7][9] = hash[9][7] = 8;
        hash[2][8] = hash[4][6] = hash[8][2] = hash[6][4] = 5;
        hash[1][9] = hash[9][1] = hash[3][7] = hash[7][3] = 5;

        return helper(m,n,1,1) * 4 + helper(m,n,1,2) * 4 + helper(m,n,1,5);
    }

private:
    int helper(int m, int n, int len, int num){

        int count = 0;
        if(len >= m)
            ++count;
        if(++len > n)
            return count;
        visited[num] = true;
        for(int i = 1; i <= 9; ++i){

            if(!visited[i] && visited[hash[num][i]]){
                count += helper(m,n,len,i);
            }
        }
        visited[num] = false;
        return count;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}