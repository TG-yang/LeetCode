#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {

        unordered_map<char,int>hash,visited;
        string result = "";

        for(auto str : s)
            ++hash[str];

        for(int i = 0; i < s.size(); ++i){

            --hash[s[i]];
            if(visited[s[i]])
                continue;
            if(result.size() != 0 && hash[result.back()] && result.back() > s[i]){

                visited[result.back()] = 0;
                result.pop_back();
            }
            result += s[i];
            visited[s[i]] = 1;
        }

        return result;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}