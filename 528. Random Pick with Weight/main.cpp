#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<int>sum;
    int total;
public:
    Solution(vector<int> w) {
        total = 0;
        for(auto val : w){
            total += val;
            sum.push_back(total);
        }
    }

    int pickIndex() {
        int value = rand() % (total) + 1;
        auto index = lower_bound(sum.begin(),sum.end(), value) - sum.begin();
        return index;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(w);
 * int param_1 = obj.pickIndex();
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}