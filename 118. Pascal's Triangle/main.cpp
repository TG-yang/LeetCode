#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        if(numRows == 0)
            return result;

        vector<int>oneResult;
        oneResult.push_back(1);
        result.push_back(oneResult);
        if(numRows == 1)
            return result;

        int n = 2;
        while(n <= numRows){
            vector<int>oneResult;
            for(int i = 0; i < n; ++i){
                if(i == 0 || i == n - 1)
                    oneResult.push_back(1);
                else{
                    oneResult.push_back(result[n - 2][i - 1] + result[n - 2][i]);
                }
            }
            ++n;
            result.push_back(oneResult);
        }
        return result;
    }
};

int main() {
    Solution*s;
    s->generate(5);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}