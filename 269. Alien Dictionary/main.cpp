#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    string alienOrder(vector<string>& words) {
        string res;

        unordered_map<char,int> indegree;
        unordered_map<char,unordered_set<char>>graph;

        for(auto word : words){
            for(auto c : word)
                indegree[c] = 0;
        }

        for(int i = 1; i < words.size(); ++i){
            string word1 = words[i - 1];
            string word2 = words[i];
            int j = 0;
            while(j < word1.size() && j < word2.size()){

                if(word1[j] != word2[j]){

                    if(graph[word1[j]].find(word2[j]) == graph[word1[j]].end()){
                        graph[word1[j]].insert(word2[j]);
                        ++indegree[word2[j]];
                    }
                    break;
                }
                ++j;
            }
        }

        for(int i = 0; i < indegree.size(); ++i){

            char ch = ' ';

            for(auto item : indegree){
                if(item.second == 0){
                    ch = item.first;
                    break;
                }
            }

            if(ch == ' ')
                return "";

            res += ch;
            --indegree[ch];

            for(auto val : graph[ch])
                --indegree[val];
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}