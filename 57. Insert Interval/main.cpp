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
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end(), compare);
        int i = 1;
        while(i < intervals.size()){
            if(intervals[i - 1].end >= intervals[i].start){
                if(intervals[i -1].end <= intervals[i].end)
                    intervals[i -1].end = intervals[i].end;
                intervals.erase(intervals.begin() + i);
            } else
                ++i;
        }
        return intervals;
    }
private:
    static bool compare(const Interval&a, const Interval&b){
        return (a.start < b.start);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}