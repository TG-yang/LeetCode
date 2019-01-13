#include <iostream>
#include <vector>
#include <string>

using namespace std;

class trie{
public:
    // char val;
    trie* son[26];
    bool isend;
    trie(){
        memset(son,0,sizeof(son));
        isend=0;
        // val=' ';
    }
    ~trie(){
        for(auto it:son)
            delete it;
    }
};
class WordDictionary {
public:
    // Adds a word into the data structure.
public:
    WordDictionary(){
        root=new trie();
    }
    ~WordDictionary(){
        delete root;
    }
    void addWord(string word) {
        // if(search(word)) return;
        trie* cur=root;
        for(auto ch:word)
        {
            int pos=ch-'a';
            if(cur->son[pos]==NULL)
            {
                cur->son[pos]=new trie();
                //cur->son[pos]->val=ch;
            }
            cur=cur->son[pos];
        }
        cur->isend=1;
    }

    // Returns if the word is in the data structure. A word could
    // contain the dot character '.' to represent any one letter.
    bool search(string word)
    {
        return helper(word.c_str(),root);
    }
private:
    trie* root;
    bool helper(const char* word,trie* root) {
        int i,k;
        trie* cur=root;

        for(i=0;word[i];i++)
        {
            char ch=word[i];
            if(cur&&ch!='.')
                cur=cur->son[ch-'a'];
            else if(cur&&ch=='.')
            {
                trie* tmp=cur;
                for(k=0;k<26;k++)
                {
                    cur=tmp->son[k];
                    if(helper(word+i+1,cur))
                        return 1;
                }
            }else break;
        }
        return cur&&cur->isend;
    }

};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary obj = new WordDictionary();
 * obj.addWord(word);
 * bool param_2 = obj.search(word);
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}