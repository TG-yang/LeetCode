#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>solution;
        vector<int>oneSolution;
        solve(candidates,0,target,solution,oneSolution);
        return solution;
    }
private:
    void solve(vector<int>&candidates, int pos, int target, vector<vector<int>>&solution, vector<int>&oneSolution){
        if(target == 0){
            solution.push_back(oneSolution);
            return;
        }
        if(target < 0)
            return;
        for(int i = pos; i < candidates.size(); ++i){
                oneSolution.push_back(candidates[i]);
                solve(candidates,i,target - candidates[i],solution,oneSolution);
                oneSolution.pop_back();
        }
    }
};
int main() {
    Solution*s = new Solution();
    vector<int> candidates = {2,3,6,7};
    s->combinationSum(candidates,7);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}