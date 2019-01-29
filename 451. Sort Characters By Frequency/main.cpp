#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char,int>> hash(128);
        for(auto c : s){
            hash[(int)c].first = c;
            hash[(int)c].second++;
        }
        sort(hash.begin(),hash.end(),[](pair<char,int>a, pair<char,int>b){
            return a.second > b.second;
        });

        string result = "";
        for(int i = 0; i < 128; ++i){
            for(int j = 0; j < hash[i].second; ++j)
                result += hash[i].first;
        }

        return result;
    }
};

int main() {

    Solution*solution;
    solution->frequencySort("Aabb");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}