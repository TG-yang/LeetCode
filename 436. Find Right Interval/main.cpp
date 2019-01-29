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
    vector<int> findRightInterval(vector<Interval>& intervals) {
        int len = intervals.size();
        vector<int>result(len,-1);
        vector<pair<Interval,int>> hash;
        for(int i = 0; i < len; ++i){
            hash.push_back(make_pair(intervals[i],i));
        }
        sort(hash.begin(),hash.end(),[](pair<Interval,int> a,  pair<Interval,int> b){
            return a.first.start <= b.first.start || (a.first.start == b.first.start && a.first.end <= b.first.end);
        });

        for(int i = 0; i < len; ++i){
            for(int j = i + 1; j < len; ++j){
                if(hash[j].first.start >= hash[i].first.end){
                    result[hash[i].second] = hash[j].second;
                    break;
                }
            }
        }

        return result;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}