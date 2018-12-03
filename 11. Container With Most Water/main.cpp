#include <iostream>
#include<vector>
#include<cmath>

using namespace std;
//贪心算法
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int maxArea = 0;
        while(i < j){
            maxArea = max(maxArea, min(height.at(i),height.at(j))*(j - i));
            if(height.at(i) > height.at(j))
                --j;
            else
               ++i;
        }
        return maxArea;
    }
};

int main() {
    Solution*s = new Solution();
    vector<int> a = {1,3,2,5,25,24,5};
    std::cout << s->maxArea(a) << std::endl;
    return 0;
}