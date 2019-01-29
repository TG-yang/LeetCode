#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<long long,int>hash;
        int count = 0;
        for(int i = 0; i < A.size(); ++i){
            for(int j = 0; j < B.size(); ++j){
                hash[A[i] + B[i]]++;
            }
        }

        for(int i = 0; i < C.size(); ++i){
            for(int j = 0; j < D.size(); ++j){
                long long sum = C[i] + D[i];
                if(hash.find(-sum) != hash.end())
                    count += hash[-sum];
            }
        }

        return count;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}