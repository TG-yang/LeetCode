#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int numSquares(int n) {

        vector<bool>visited((n + 1),false);
        queue<pair<int,int>>queue1;
        queue1.push(make_pair(n,0));

        while(!queue1.empty()){

            int node = queue1.front().first;
            int step = queue1.front().second;

            queue1.pop();

            for(int i = 1; i * i <= node; ++i){

                int nextNode = node - i * i;

                if(nextNode == 0)
                    return step + 1;
                if(!visited[nextNode]){
                    visited[nextNode] = true;
                    queue1.push(make_pair(nextNode,step + 1));
                }
            }
        }
        return 0;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}