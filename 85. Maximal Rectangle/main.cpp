#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
private:
    int maxAreaFunction(int*height,int length){
        int maxArea = 0;
        stack<int> stack;
        int i = 0;

        while (i < length){
            if(stack.empty() || height[stack.top()] <= height[i])
                stack.push(i++);
            else{
                int j = stack.top();
                stack.pop();
                int area = height[j]*(stack.empty()? i : i - stack.top() - 1);
                if(area > maxArea)
                    maxArea = area;
            }
        }
        return maxArea;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
        if(row == 0) return 0;
        int col = matrix[0].size();
        if(col == 0) return 0;

        int *height = new int[col + 1]();
        height[col] = 0;
        int maxArea = 0;

        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                if(matrix[i][j] == '1')
                    height[j]++;
                else
                    height[j] = 0;
            }
            int area = maxAreaFunction(height,col+1);
            if(area > maxArea)
                maxArea = area;
        }
        delete [] height;
        return maxArea;
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}