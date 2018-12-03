#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        int result = 0;
        if(height <= 2)
            return 0;
        int leftMax[len];
        int rightMax[len];
        leftMax[0] = 0;
        rightMax[len - 1] = 0;
        for(int i = 1; i < len; ++i){
            leftMax[i] = max(leftMax[i - 1],height[i -1]);
            rightMax[len - 1 - i] = max(rightMax[len - i],height[len - i]);
        }
        for(int i = 0 ; i < len; ++i){
            int h = min(leftMax[i],rightMax[i]);
            if(h > height[i])
                result += h - height[i];
        }
        return result;
//        int result = 0;
//        int start = 0, end = 0;
//        while(start < height.size()){
//            ++end;
//            while(end < height.size()){
//                if(height[start] <=height[end])
//                    break;
//                ++end;
//            }
//            if(end == height.size()){
//                start = end = start + 1;
//            }
//            if(start + 1 == end){
//                start = end;
//                continue;
//            }
//            for(int i = start + 1; i < end; ++i){
//                result += height[start] - height[i];
//            }
//            start = end;
//        }
//        return result;
//        if(height.size() <=2)
//            return 0;
//        int result = 0;
//        int start = 0, end = height.size() - 1;
//        int len = findMax(height);
//        for(int i = 0; i < height[len]; ++i){
//            while(start <= end){
//                if(height[start] <= i)
//                    ++start;
//                if(height[end] <=i)
//                    --end;
//                if(height[start] > i && height[end] > i) {
//                    for (int k = start; k <= end; ++k) {
//                        if (height[k] = i) {
//                            ++height[k];
//                            ++result;
//                        }
//                    }
//                    break;
//                }
//            }
//        }
//        return result;
    }
private:
    int findMax(vector<int>height){
        sort(height.begin(),height.end());
        return height[height.size() - 1];
    }
};

int main() {
    Solution*s = new Solution();
    vector<int> height = {4,2,3};
    std::cout << s->trap(height) << std::endl;
    return 0;
}