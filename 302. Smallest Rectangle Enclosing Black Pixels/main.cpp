#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int left = INT_MAX, right = INT_MIN;
    int top = INT_MAX, button = INT_MIN;
    int m, n;
public:
    int minArea(vector<vector<char>>& image, int x, int y) {

        m = image.size();
        if(m == 0)
            return 0;
        n = image[0].size();
        if(n == 0)
            return 0;

        helper(image,x,y);

        return (right - left + 1) * (button - top + 1);
    }

private:
    void helper(vector<vector<char>>& image, int x, int y){

        if(x < 0 || x >= m || y < 0 || y >= n || image[x][y] == '0')
            return;

        left = min(left,y);
        right = max(right,y);
        top = min(top, x);
        button = max(button,x);

        image[x][y] = '0';

        helper(image,x + 1,y);
        helper(image,x - 1,y);
        helper(image,x,y - 1);
        helper(image,x,y + 1);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}