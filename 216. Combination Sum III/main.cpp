#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
private:
    set<vector<int>> result;
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>oneResult;
        helper(k,n,oneResult);

        vector<vector<int>> res(result.begin(),result.end());

        return res;
    }

    void helper(int k, int n, vector<int>oneResult){

        if(n < 0)
            return;

        if(k == 0){
            if(n == 0){
                sort(oneResult.begin(),oneResult.end());
                result.insert(oneResult);
            }
            return;
        }

        for(int i = 1; i < 10; ++i){

            if(find(oneResult.begin(),oneResult.end(),i) != oneResult.end())
                continue;

            oneResult.push_back(i);
            helper(k - 1, n - i, oneResult);
            oneResult.pop_back();
        }

        return;
    }
};

int main() {
    Solution*s = new Solution();
    s->combinationSum3(3,7);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}