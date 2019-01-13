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
    bool canAttendMeetings(vector<Interval>& intervals) {

        sort(intervals.begin(),intervals.end(),compare);

        for(int i = 1; i < intervals.size(); ++i){

            if(intervals[i - 1].end > intervals[i].start)
                return false;
        }
        return true;
    }

private:
    static bool compare(Interval a, Interval b){

        return a.start < b.start;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}