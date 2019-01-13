#include <iostream>
#include <vector>
#include <map>
#include <math.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> closestKValues(TreeNode* root, double target, int k) {

        multimap<double ,int>res;
        helper(root,target,k,res);

        vector<int>result;

        for(auto val : res)
            result.push_back(val.second);

        return result;
    }

private:

    void helper(TreeNode* root, double target, int k,multimap<double,int>&res){

        if(!root)
            return;

        if(k == res.size() && (abs(root->val - target)) < (*res.rbegin()).first){
            cout << (*res.rbegin()).first << " ";
            res.erase((*res.rbegin()).first);
            res.insert(pair<double,int>(abs(root->val - target),root->val));
        }else if(k > res.size()){
            res.insert(pair<double,int>(abs(root->val - target),root->val));
        }

        helper(root->left,target,k,res);
        helper(root->right,target,k,res);

        return;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}