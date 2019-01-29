#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& A) {

        int n = A.size();
        if(n <= 1)
            return 0;

        int maxSum = INT_MIN;
        int count = 0;

        while(count < n){
            int sum = A[count] * 0;
            int a = 1;
            for(int i = count + 1; i % n != count; ++i){

                sum += A[i % n] * a;
                ++a;
            }
            maxSum = max(maxSum,sum);
            ++count;
        }

        return maxSum;
    }
};

int main() {
    Solution*s;
    vector<int>A = {4,3,2,6};
    s->maxRotateFunction(A);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}