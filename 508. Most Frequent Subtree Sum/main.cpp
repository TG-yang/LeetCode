#include <iostream>
#include <vector>
#include <unordered_map>
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
    vector<int> findFrequentTreeSum(TreeNode* root) {
        int maxFrequence = 0;
        unordered_map<int,int>sumAndfreq;
        unordered_map<int,unordered_set<int>>freqAndsum;
        helper(root,sumAndfreq,freqAndsum,maxFrequence);
        vector<int>result(freqAndsum[maxFrequence].begin(),freqAndsum[maxFrequence].end());
        return result;
    }

private:
    int helper(TreeNode*root,unordered_map<int,int>&sumAndfreq,unordered_map<int,unordered_set<int>>&freqAndsum, int&maxFrequence){
        if(!root)
            return 0;
        int sum = root->val;
        sum += helper(root->left,sumAndfreq,freqAndsum,maxFrequence);
        sum += helper(root->right,sumAndfreq,freqAndsum,maxFrequence);
        sumAndfreq[sum]++;
        cout << sumAndfreq[sum] << " ";
        if(sumAndfreq[sum] == 1){
            freqAndsum[sumAndfreq[sum]].insert(sum);
        }else if(sumAndfreq[sum] > 1){
            freqAndsum[sumAndfreq[sum] - 1].erase(sum);
            freqAndsum[sumAndfreq[sum]].insert(sum);
        }
        maxFrequence = maxFrequence < sumAndfreq[sum] ? sumAndfreq[sum] : maxFrequence;
        return sum;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}