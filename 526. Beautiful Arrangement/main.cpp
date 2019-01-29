#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countArrangement(int N) {
        vector<bool>used(N + 1, false);
        int res = 0;
        helper(N,N,used,res);
        return res;
    }

private:
    void helper(int N, int pos, vector<bool>&used, int&res){
        if(pos <= 0){
            res++;
            return;
        }

        for(int i = 1; i <= N; ++i){
            if(used[i] == false && (pos % i == 0 || i % pos == 0)){
                used[i] = true;
                helper(N, pos - 1, used, res);
                used[i] = false;
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}