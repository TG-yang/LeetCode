#include <iostream>
#include <string>
#include <set>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,stack<int>>map1;
        for(int i = 0; i < s.size(); ++i){
            map1[s[i]].push(i);
        }
        int index = INT_MAX;
        for(auto item : map1){
            if(item.second.size() == 1){
                index = min(index,item.second.top());

            }
        }
        if(index == INT_MAX)
            return -1;
        else
            return index;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}