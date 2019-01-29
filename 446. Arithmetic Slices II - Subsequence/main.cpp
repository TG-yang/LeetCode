#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        if(A.size() == 0)
            return 0;

        vector<unordered_map<int,int>>dp(A.size());
        int result = 0;

        for(int i = 0; i < A.size(); ++i){
            for(int j = 0; j < i; ++j){

                if((long)A[i] - (long)A[j] > INT_MAX || (long)A[i] - (long)A[j] < INT_MIN) continue;

                int diff = A[i] - A[j];
                dp[i][diff] += 1;
                if(dp[j].find(diff) != dp[j].end()){
                    dp[i][diff] += dp[j][diff];
                    result += dp[j][diff];
                }
            }
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}