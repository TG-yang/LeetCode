#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {

        if(people.size() == 0)
            return {};
        sort(people.begin(),people.end(),compare);

        vector<pair<int,int>>result;

        for(auto val : people){
            result.insert(result.begin() + val.second, val);
        }

        return result;
    }

private:
    static bool compare(pair<int,int>a,pair<int,int>b){

        return a.first == b.first ? a.second < b.second : a.first > b.first;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}