#include <iostream>
#include <vector>

using namespace std;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
    int eraseOverlapIntervals(vector<Interval>& intervals) {

        int len = intervals.size();
        if(!len)
            return 0;

        sort(intervals.begin(),intervals.end(),[](Interval a, Interval b){
            return a.end < b.end || (a.end == b.end && a.start > b.start);
        });

        int start = intervals[0].start;
        int end = intervals[0].end;
        int count = 1;
        for(int i = 1; i < len; ++i){

            if(intervals[i].start >= end){
                count++;
                end = intervals[i].end;
            }
        }

        return len - count;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}