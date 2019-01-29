#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int add = 0;
        int result = 0;

        for(int i = 2; i < A.size(); ++i){

            if(A[i] - A[i - 1] == A[i - 1] - A[i - 2]){
                ++add;
                result += add;
            }else{
                add = 0;
            }
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}