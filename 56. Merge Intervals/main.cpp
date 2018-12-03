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
    vector<Interval> merge(vector<Interval>& intervals) {
        int  i = 1;
        sort(intervals.begin(),intervals.end(),compare);
        while( i < intervals.size()){
            if(intervals[i - 1].end >= intervals[i].start){
                if(intervals[i - 1].end <= intervals[i].end)
                    intervals[i - 1].end = intervals[i].end;
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
    Solution*s;
    Interval l1(1,3),l2(2,6),l3(8,10),l4(15,18);
    vector<Interval>vec{l1,l2,l3,l4};
    s->merge(vec);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}