#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
private:
    unordered_map<int,int>hash;
    int n, row, col;
public:
    Solution(int n_rows, int n_cols) : row(n_rows), col(n_cols){
        reset();
    }

    vector<int> flip() {
        int r = rand() % n--;
        int x = (hash.find(r) != hash.end() ? hash[r] : r);
        hash[r] = (hash.find(n) != hash.end() ? hash[n] : n);
        return vector<int>{x/col, x%col};
    }

    void reset() {
        n = row * col;
        hash.clear();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(n_rows, n_cols);
 * vector<int> param_1 = obj.flip();
 * obj.reset();
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}