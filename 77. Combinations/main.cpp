#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {

        if(n < k || k == 0) return result;

        vector<int> subans;
        dfs(subans,1,n,k);
        return result;
    }

    void dfs(vector<int>&subans, int start,int n, int k){
        if(subans.size() == k){
            result.push_back(subans);
            return;
        }
        for(int i = start; i <= n; ++i){
            subans.push_back(i);
            dfs(subans,i + 1, n, k);
            subans.pop_back();
        }
    }

private:
    vector<vector<int>>result;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}