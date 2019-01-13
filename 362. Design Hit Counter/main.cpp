#include <iostream>
#include <list>

using namespace std;

class HitCounter {
private:
    list<int>list1;
public:
    /** Initialize your data structure here. */
    HitCounter() {

    }

    /** Record a hit.
        @param timestamp - The current timestamp (in seconds granularity). */
    void hit(int timestamp) {

        list1.push_back(timestamp);
    }

    /** Return the number of hits in the past 5 minutes.
        @param timestamp - The current timestamp (in seconds granularity). */
    int getHits(int timestamp) {

        auto start = list1.begin();
        while(start != list1.end() && timestamp - *start >= 300)
            start = list1.erase(start);
        return list1.size();
    }
};

/**
 * Your HitCounter object will be instantiated and called as such:
 * HitCounter obj = new HitCounter();
 * obj.hit(timestamp);
 * int param_2 = obj.getHits(timestamp);
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}