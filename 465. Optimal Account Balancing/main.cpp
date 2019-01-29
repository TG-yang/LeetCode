#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
private:
    vector<long> debt;
public:
    int minTransfers(vector<vector<int>>& transactions) {
        unordered_map<int,int> balance;
        for(auto transaction : transactions){
            balance[transaction[0]] -= transaction[2];
            balance[transaction[1]] += transaction[2];
        }

        for(auto bal : balance){
            if(bal.second)
                debt.push_back(bal.second);
        }

        return helper(0,0);
    }

private:
    int helper(int s, int cnt){
        while(s < debt.size() && !debt[s])
            ++s;
        int Min = INT_MAX;
        for(long i = s + 1, prev = 0; i < debt.size(); ++i){
            //// skip already tested or same sign debt
            if(prev != debt[i] && debt[i] * debt[s] < 0){
                debt[i] += debt[s];
                Min = min(Min, helper(s + 1, cnt + 1));
                debt[i] -= debt[s];
                prev = debt[i];
            }
        }

        return Min < INT_MAX ? Min : cnt;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}