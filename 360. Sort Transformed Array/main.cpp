#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> sortTransformedArray(vector<int>& nums, int a, int b, int c) {

        multiset<int>set1;
        for(auto x : nums){

            int res = a * x * x + b * x + c;
            set1.insert(res);
        }
        vector<int>result(set1.begin(),set1.end());
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}