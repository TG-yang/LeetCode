#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
    bool isReflected(vector<pair<int, int>>& points) {
        set<pair<int,int>>set1;
        int Min = INT_MAX;
        int Max = INT_MIN;

        for(auto point : points){
            Min = min(Min, point.first);
            Max = max(Max, point.first);
            set1.insert(make_pair(point.first,point.second));
        }

        int sum = Max + Min;

        for(auto st : set1){

            if(set1.count(make_pair(sum - st.first,st.second)) == 0)
                return false;
        }

        return true;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}