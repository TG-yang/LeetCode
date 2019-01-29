#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int minDiff = INT_MAX;
        sort(timePoints.begin(),timePoints.end());
        for(int i = 0; i < timePoints.size(); ++i){
            int cur = i, pre = i ? i - 1 : timePoints.size() - 1;
            int curHr = stoi(timePoints[cur].substr(0,2));
            int preHr = stoi(timePoints[pre].substr(0,2));
            int curMt = stoi(timePoints[cur].substr(3,2));
            int preMt = stoi(timePoints[pre].substr(3,2));
            if(curHr < preHr || (curHr == preHr && curMt < preMt)) curHr += 24;
            minDiff = min(minDiff, (curHr - preHr) * 60 + curMt - preMt);
        }

        return minDiff;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}