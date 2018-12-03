#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <iterator>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

struct Node
{
    string word;
    int len;

    Node(string w, int l): word(w), len(l) {}
};

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        if (dict.count(endWord) == 0) return 0;
        queue<Node*> q;
        unordered_map<string, bool> m;
        Node* beginNode = new Node(beginWord, 1);
        q.push(beginNode);
        m[beginWord] = true;
        while(!q.empty())
        {
            Node* frontNode = q.front();
            q.pop();
            string frontWord = frontNode->word;
            //neighbor search
            for(int i = 0; i < frontWord.size(); i ++)
            {
                for(char c = 'a'; c <= 'z'; c ++)
                {
                    if(c == frontWord[i])
                        continue;

                    string frontWordCp = frontWord;
                    frontWordCp[i] = c;
                    //end
                    if(frontWordCp == endWord)
                        return frontNode->len+1;
                    if(dict.find(frontWordCp) != dict.end() && m[frontWordCp] == false)
                    {
                        Node* neighborNode = new Node(frontWordCp, frontNode->len+1);
                        q.push(neighborNode);
                        m[frontWordCp] = true;
                    }
                }
            }
        }
        return 0;
    }
};
//
//class Solution {
//public:
//    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
//        unordered_set<string> dict(wordList.begin(), wordList.end());
//        if (dict.count(endWord) == 0) return 0;
//
//        unordered_set<string> s1 = {beginWord};
//        unordered_set<string> s2 = {endWord};
//        dict.erase(endWord);
//        int step = 0;
//
//        while (!s1.empty() && !s2.empty()) {
//            step++;
//            if (s1.size() > s2.size()) swap(s1, s2);
//            unordered_set<string> temp;
//
//            for (auto word : s1) {
//                for (int i=0; i<word.size(); i++) {
//                    char oldChar = word[i];
//                    for (char c='a'; c<='z'; c++) {
//                        if (c == oldChar) continue;
//                        string newWord = word;
//                        newWord[i] = c;
//                        if (s2.count(newWord)) return step+1;
//                        if (dict.count(newWord)) {
//                            temp.insert(newWord);
//                            dict.erase(newWord);
//                        }
//                    }
//                }
//            }
//            swap(s1, temp);
//        }
//        return 0;
//    }
//};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}