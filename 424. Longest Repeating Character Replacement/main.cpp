#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int>hash(26);
        int i = 0, j = 0;
        int maxLength = INT_MIN;
        int n = s.size();
        while (j < n){

            ++hash[s[j] - 'A'];
            while(j - i + 1 - helper(hash) > k){
                ////对以i开始窗口左边界延伸的最大右边界只能到j时(窗口大小减窗口中最多的元素得到需要替换的数目）
                --hash[s[i] - 'A'];
                ++i;
            }
            maxLength = max(maxLength, j - i + 1);////更新最大窗口大小
            ++j;
        }
        return maxLength == INT_MIN ? 0 : maxLength;
    }

private:
    int helper(vector<int>hash){

        int Max = 0;
        for(auto val : hash){
            Max = max(Max,val);
        }

        return Max;
    }
};
//维护一个滑动窗口

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}