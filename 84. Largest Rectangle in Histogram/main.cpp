#include <iostream>
#include <vector>
#include <stack>
using namespace std;
//
//class Solution {
//public:
//    int largestRectangleArea(vector<int>& heights) {
//        if(heights.size() == 0)
//            return 0;
//        int count = 0;
//        int maxcount = 0;
//        int result = 0;
//        auto max = max_element(heights.begin(),heights.end());
//
//        for(int i = 1; i <= *max; ++i){
//            maxcount = count = 0;
//            for(int j = 1; j < heights.size(); ++j){
//                if(heights[j - 1] >= i && heights[j] >= i)
//                    ++count;
//                else
//                    count = 0;
//                if(count > maxcount){
//                    maxcount = count;
//                }
//            }
//            result = result > (maxcount + 1) * i ? result : (maxcount + 1) * i;
//        }
//
//        return result;
//    }
//};

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int nSize = heights.size();
        int i = 0;
        int maxSize = 0;
        while (i < nSize)
        {
            int j = i+1;
            int k = i-1;
            int sum = heights[i];
            while (k >= 0&&heights[k]>=heights[i])
            {
                k--;
                sum += heights[i];
            }
            while (j<nSize&&heights[j]>=heights[i])
            {
                j++;
                sum += heights[i];
            }
            maxSize = max(maxSize, sum);
            i++;
        }
        return maxSize;
    }
};
class Solution {
public :
    int largestRectangleArea(vector<int>& heights){
        heights.push_back(0);
        int nSize = heights.size();
        stack<int> index;
        int maxSize = 0;
        int i=0;
        while(i<nSize)
        {
            if (index.empty()||heights[i]>heights[index.top()])
            {
                index.push(i);
                i++;
            }
            else
            {
                int j = index.top();
                index.pop();
                maxSize = max(maxSize, heights[j]*(index.empty() ? i : (i - index.top() - 1) ));

            }
        }
        return maxSize;
    }
};

int main() {
    Solution*s;
    vector<int>heights{2,1,2};
    s->largestRectangleArea(heights);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}