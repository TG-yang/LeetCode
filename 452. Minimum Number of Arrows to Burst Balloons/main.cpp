#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<pair<int, int>>& points) {

        int len = points.size();
        if(!len)
            return 0;
        sort(points.begin(),points.end(),[](pair<int,int>a, pair<int,int>b){
            return a.second < b.second;
        });

        int i = 0, j = 0;
        int count = 0;

        while (i < len){
            int end = points[i].second;
            ++count;
            j = i + 1;
            while (j < len && points[j].first <= end){
                ++j;
            }
            i = j;
        }

        return count;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}