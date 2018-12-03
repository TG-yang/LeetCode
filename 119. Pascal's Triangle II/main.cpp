#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>result;
        vector<int>oneResult;
        oneResult.push_back(1);
        result.push_back(oneResult);
        if(rowIndex == 0)
            return oneResult;

        int n = 1;
        while(n <= rowIndex){
            vector<int>oneResult;
            for(int i = 0; i <= n; ++i){
                if(i == 0 || i == n)
                    oneResult.push_back(1);
                else{
                    oneResult.push_back(result[n - 1][i - 1] + result[n - 1][i]);
                }
            }
            ++n;
            result.push_back(oneResult);
        }
        return result[result.size() - 1];
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}