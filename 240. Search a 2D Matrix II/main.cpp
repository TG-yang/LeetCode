#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//private:
//    int isFind = 0;
//public:
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//
//        if(matrix.size() == 0 || matrix[0].size() == 0)
//            return false;
//
//       int m = matrix.size() - 1;
//       int n = matrix[0].size() - 1;
//
//       helper1(matrix,target,m,n);
//
//       return isFind == 1;
//    }
//    void helper1(vector<vector<int>>& matrix, int target,int i, int j){
//
//        if(matrix[i][j] == target){
//            isFind = 1;
//            return;
//        }else if(i == 0 && j == 0)
//            return;
//
//        if(i - 1 >= 0 && j - 1 >= 0){
//            if(matrix[i - 1][j - 1] >= target)
//                helper1(matrix,target,i - 1,j - 1);
//        }
//        if(i - 1 >= 0){
//            if(matrix[i - 1][j] >= target)
//                helper1(matrix,target,i - 1,j);
//        }
//        if(j - 1 >= 0){
//            if(matrix[i][j - 1] >= target)
//                helper1(matrix,target,i,j - 1);
//        }
//
//        return;
//    }
//
//};
class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target) {
        if(matrix.size() == 0) return false;

        int i,j,rows = matrix.size(),cols = matrix[0].size();

        i = 0;
        j = cols-1;
        while(i < rows && j >= 0)
        {
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] > target) j--;
            else i++;
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}