#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getModifiedArray(int length, vector<vector<int>>& updates) {

        vector<int>result(length,0);

        for(auto update : updates){

            int start = update[0];
            int end = update[1];
            int val = update[2];
            for(int i = start; i <= end; ++i){
                result[i] += val;
            }
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}