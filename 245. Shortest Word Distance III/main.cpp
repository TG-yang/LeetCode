#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int shortestWordDistance(vector<string>& words, string word1, string word2) {

        unordered_map<string,set<int>>hash;

        for(int i = 0; i < words.size(); ++i){

            if(words[i] == word1 || words[i] == word2){
                hash[words[i]].insert(i);
            }
        }

        int min_distance = INT_MAX;

        for(auto Pos1 : hash[word1]){
            for(auto Pos2 : hash[word2]){
                if(Pos1 - Pos2 == 0)
                    continue;
                min_distance = min(min_distance,abs(Pos1 - Pos2));
            }
        }

        return min_distance;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}