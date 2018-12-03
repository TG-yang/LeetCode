#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<bool>>boolMatrix(n,vector<bool>(n,false));
        vector<vector<int>>result(n,vector<int>(n,1));
        int direct = 0;
        int number = 1;
        int i = 0, j = 0;
        while(i < n && j < n && i >= 0 && j >= 0 && number <= n*n){
            if(boolMatrix[i][j])
                break;
            result[i][j] = number;
            boolMatrix[i][j] = true;
            ++number;
            switch (direct){
                case 0:
                    if(j == (n - 1) || boolMatrix[i][j + 1] == true){
                        direct = 1;
                        ++i;
                    } else
                        ++j;
                    break;
                case 1:
                    if(i == ( n - 1) || boolMatrix[i + 1][j] == true){
                        direct = 2;
                        --j;
                    }else
                        ++i;
                    break;
                case 2:
                    if(j == 0 || boolMatrix[i][j - 1] == true){
                        direct = 3;
                        --i;
                    } else
                        --j;
                    break;
                case 3:
                    if(i == 0 || boolMatrix[i - 1][j] == true) {
                        direct = 0;
                        ++j;
                    } else
                        --i;
                    break;
            }
        }
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}