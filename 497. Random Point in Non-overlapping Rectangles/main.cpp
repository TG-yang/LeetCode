#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
private:
    vector<vector<int>> rects;
    int sum = 0;
    map<int,int>hash;
public:
    Solution(vector<vector<int>> rects) {
        this->rects = rects;
        for(auto rect : rects){
            sum += (rect[3] - rect[1] + 1) * (rect[2] - rect[0] + 1);
            hash.insert({sum, (int)hash.size()});
        }
    }

    vector<int> pick() {
        int value = rand() % sum;
        int id = hash.upper_bound(value)->second;
        vector<int> rect = rects[id];
        int width = rect[2] - rect[0] + 1;
        int height = rect[3] - rect[1] + 1;
        int x = rect[0] + rand() % width;
        int y = rect[1] + rand() % height;
        vector<int> result = {x, y};
        return result;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(rects);
 * vector<int> param_1 = obj.pick();
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}