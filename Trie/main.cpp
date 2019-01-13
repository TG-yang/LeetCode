#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <assert.h>


using namespace std;

const int MaxBranchNum = 26;

class TrieNode{
public:
    char*word;
    int count;
    TrieNode*nextBranch[MaxBranchNum];
public:
    TrieNode():word(NULL),count(0){
        memset(nextBranch,NULL,sizeof(TrieNode*)*MaxBranchNum);
    }
};

class Trie{
public:
    Trie();
    ~Trie();
    void insert(const char* str);
    bool Search(const char* str,int& count);
    bool Remove(const char* str);
    void PrintALL();//打印trie树中所有的结点
    void PrintPre(const char* str);//打印以str为前缀的单词
private:
    TrieNode* pRoot;
private:
    void Destory(TrieNode* pRoot);
    void Print(TrieNode* pRoot);
};

Trie::Trie(){
    pRoot = new TrieNode();//注意字典树的根不存放字符
}

Trie::~Trie(){
    Destory(pRoot);
}

void Trie::insert(const char *str) {

    assert(str != NULL);
    int index;
    TrieNode*pLoc = pRoot;
    for(int i = 0; str[i]; ++i){

        index = str[i] - 'a';

        if(index > MaxBranchNum || index < 0)
            return;

        if(NULL == pLoc->nextBranch[index]){
            pLoc->nextBranch[index] = new TrieNode();
        }
        pLoc = pLoc->nextBranch[index];
    }
    if (NULL != pLoc->word){
        pLoc->count++;
        return;
    }
    else{
        pLoc->count++;
        pLoc->word = new char[strlen(str) + 1];
        assert(NULL != pLoc->word);
        strcpy(pLoc->word,str);
    }

}

bool Trie::Search(const char *str, int &count) {

    assert(str != NULL);
    int i = 0;
    int index = -1;;
    TrieNode* pLoc = pRoot;

    while(pLoc && *str){
        index = *str - 'a';//如果区分大小写，可以扩展

        if(index < 0 || index > MaxBranchNum){
            return false;
        }

        pLoc = pLoc->nextBranch[index];
        str++;
    }
    if (pLoc && pLoc->word){
        count = pLoc->count;
        return true;
    }

    return false;
}

bool Trie::Remove(const char* str) {
    assert(NULL != str);
    int index = -1;;
    TrieNode* pLoc = pRoot;
    while(pLoc && *str){
        index = *str - 'a';//如果区分大小写，可以扩展

        if(index < 0 || index > MaxBranchNum){
            return false;
        }

        pLoc = pLoc->nextBranch[index];
        str++;
    }
    if (pLoc && pLoc-> word){
        delete[] pLoc->word;
        pLoc->word = NULL;
        return true;
    }
    return false;
}

void Trie::PrintALL() {
    Print(pRoot);
}

void Trie::PrintPre(const char* str) {
    assert(str != NULL);
    int i = 0;
    int index = -1;;
    TrieNode* pLoc = pRoot;
    while(pLoc && *str){
        index = *str - 'a';//如果区分大小写，可以扩展

        if(index < 0 || index > MaxBranchNum){
            return;
        }

        pLoc = pLoc->nextBranch[index];
        str++;
    }
    if (pLoc){
        Print(pLoc);
    }
}

/*按照字典顺序输出以pRoot为根的所有的单词*/
void Trie::Print(TrieNode* pRoot) {
    if (NULL == pRoot){
        return;
    }
    //输出单词
    if (NULL != pRoot->word){
        cout<<pRoot->word<<" "<<pRoot->count<<endl;
    }
    //递归处理分支
    for (int i = 0;i < MaxBranchNum;i++){
        Print(pRoot->nextBranch[i]);
    }
}

/*销毁trie树*/
void Trie::Destory(TrieNode* pRoot) {
    if (NULL == pRoot){
        return;
    }
    for (int i = 0;i < MaxBranchNum;i++){
        Destory(pRoot->nextBranch[i]);
    }
    //销毁单词占得空间
    if (NULL != pRoot->word){
        delete []pRoot->word;
        pRoot->word = NULL;
    }
    delete pRoot;//销毁结点
    pRoot = NULL;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}





























