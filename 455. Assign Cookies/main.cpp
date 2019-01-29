#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        int count = 0;
        int j = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        for(int i = 0; i < s.size(); ++i){
            if(j >= g.size())
                break;
            if(s[i] >= g[j]){
                ++count;
                ++j;
            }
        }

        return count;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}