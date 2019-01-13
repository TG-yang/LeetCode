#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
using namespace std;

class WordDistance {
private:
    unordered_map<string,set<int>> hash;

public:
    WordDistance(vector<string> words) {

        for(int i = 0; i < words.size(); ++i){

            hash[words[i]].insert(i);
        }
    }

    int shortest(string word1, string word2) {

        if(hash[word1].size() == 1 && hash[word2].size() == 1)
            return abs(*hash[word1].begin() - *hash[word2].begin());
        else{
            int min_distance = INT_MAX;
            for(auto pos1 : hash[word1]){
                for(auto pos2 : hash[word2]){
                    min_distance = min(min_distance,abs(pos1 - pos2));
                }
            }
            return min_distance;
        }
    }
};

/**
 * Your WordDistance object will be instantiated and called as such:
 * WordDistance obj = new WordDistance(words);
 * int param_1 = obj.shortest(word1,word2);
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}