#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {

        int start = 0;
        int len = timeSeries.size();
        if(len == 0)
            return 0;

        for(int i = 0; i < len - 1; ++i){
            int diff = timeSeries[i] + duration - timeSeries[i + 1];
            start += duration;
            if(diff > 0){
                start -= diff;
            }
        }
        start += duration;
        return start;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}