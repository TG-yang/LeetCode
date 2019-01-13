#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <stack>

using namespace std;


class Solution {
public:
    vector<string> findItinerary(vector<pair<string, string>> tickets) {

        unordered_map<string,multiset<string>>map1;
        vector<string> res;

        if (tickets.size() <= 0) {
            return res;
        }

        for (pair<string, string> p: tickets) {
            map1[p.first].insert(p.second);

        }

        stack<string> s;
        s.push("JFK");
        while(s.size()){

            string next = s.top();
            if(map1[next].empty()){
                res.push_back(next);
                s.pop();
            }else{
                s.push(*map1[next].begin());
                map1[next].erase(map1[next].begin());
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}