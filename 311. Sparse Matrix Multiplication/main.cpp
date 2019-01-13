#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {

        int mA = A.size(), nA = A[0].size();
        int mB = B.size(), nB = B[0].size();

        vector<vector<int>> result;

        for(int i = 0; i < mA; ++i){
            vector<int> row(A[i].begin(),A[i].end());
            result.push_back(helper(row,B,mB,nB));
        }

        return result;
    }

private:
    vector<int> helper(vector<int>&row,vector<vector<int>>&B, int mB, int nB){

        vector<int>resRow;
        for(int j = 0; j < nB; ++j){
            int value = 0;
            for(int i = 0; i < mB; ++i){
                value += row[i] * B[i][j];
            }
            resRow.push_back(value);
        }
        return resRow;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}