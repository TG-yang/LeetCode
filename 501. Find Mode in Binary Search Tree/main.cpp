#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        map<int,int>frequence;// key and frequence
        map<int,unordered_set<int>>hash;// frequence and keys
        int Max = 1;
        helper(root,frequence,hash,Max);
        vector<int>res(hash[Max].begin(),hash[Max].end());

        return res;
    }
private:
    void helper(TreeNode* root, map<int,int>&frequence,map<int,unordered_set<int>>&hash, int&Max){
        if(!root)
            return;
        if(frequence.count(root->val)){
            ++frequence[root->val];
            hash[frequence[root->val] - 1].erase(root->val);
            hash[frequence[root->val]].insert(root->val);
            Max = max(Max,frequence[root->val]);
        }else{
            frequence[root->val] = 1;
            hash[frequence[root->val]].insert(root->val);
        }
        helper(root->left,frequence,hash,Max);
        helper(root->right,frequence,hash,Max);
        return;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}