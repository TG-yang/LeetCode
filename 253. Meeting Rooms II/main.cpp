#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        map<int,int>hash;
        for(auto val : intervals){
            hash[val.start]++;
            hash[val.end]--;
        }

        int res = 0, rooms = 0;
        for(auto val : hash){

            res = max(res,rooms += val.second);
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}