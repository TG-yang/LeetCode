#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class ValidWordAbbr {
private:
    unordered_map<string,unordered_set<string>> hash;
public:
    ValidWordAbbr(vector<string> dictionary) {

        for(auto word : dictionary){

            string wordKey = helper(word);
            hash[wordKey].emplace(word);
        }
    }

    bool isUnique(string word) {

        string str = helper(word);

        return hash[str].empty() || hash[str].count(word) == hash[str].size();
    }

private:

    string helper(string& word){

        if(word.size() <= 2)
            return word;

        return word[0] + to_string(word.size()) + word[word.size() - 1];
    }
};

/**
 * Your ValidWordAbbr object will be instantiated and called as such:
 * ValidWordAbbr obj = new ValidWordAbbr(dictionary);
 * bool param_1 = obj.isUnique(word);
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}