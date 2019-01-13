#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Trie {
private:
    vector<string>value;
public:
    /** Initialize your data structure here. */
    Trie() {

    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        value.push_back(word);
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {

        if(find(value.begin(),value.end(),word) != value.end())
            return true;
        else
            return false;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {

        int preSize = prefix.size();

        for(int i = 0; i < value.size(); ++i){

            string temp = value[i];
            if(temp.substr(0,preSize) == prefix)
                return true;
        }

        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * bool param_2 = obj.search(word);
 * bool param_3 = obj.startsWith(prefix);
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}