#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<pair<int, int>> getSkyline(vector<vector<int>>& buildings) {
        if(buildings.size() == 0)
            return {};

        multiset<pair<int,int>>st;
        vector<pair<int,int>>res;

        for(auto val : buildings){
            st.insert(make_pair(val[0],-val[2]));
            st.insert(make_pair(val[1],val[2]));
        }

        multiset<int>heights{0};
        int Max = 0;

        for(auto val : st){

            if(val.second < 0)
                heights.insert(-val.second);
            else
                heights.erase(heights.find(val.second));

            if(*heights.rbegin() != Max){
                res.push_back(make_pair(val.first,*heights.rbegin()));
            }
            Max = *heights.rbegin();
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}