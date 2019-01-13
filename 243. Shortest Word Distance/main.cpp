#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int shortestDistance(vector<string>& words, string word1, string word2) {

        vector<int>word1Pos;
        vector<int>word2Pos;

        for(int i = 0; i < words.size(); ++i){

            if(words[i] == word1)
                word1Pos.push_back(i);
            if(words[i] == word2)
                word2Pos.push_back(i);
        }

        int min_distance = INT_MAX;

        for(int i = 0; i < word1Pos.size(); ++i){
            for(int j = 0; j <word2Pos.size(); ++j){

                min_distance = min(min_distance,abs(word1Pos - word2Pos));
            }
        }

        return min_distance;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}