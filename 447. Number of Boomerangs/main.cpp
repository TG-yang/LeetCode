#include <iostream>
#include <vector>
#include <unordered_map>
#include <math.h>

using namespace std;

class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {

        int result = 0;
        for(auto & p : points){
            unordered_map<double,int> hash;
            for(auto& q : points){
                result += 2 * hash[hypot(p.first - q.first, p.second - q.second)]++;
            }
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}