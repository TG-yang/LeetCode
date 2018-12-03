#include <iostream>
#include <vector>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {

        vector<int>vec;
        for(ListNode*p = head; p != NULL; p = p->next){
            vec.push_back(p -> val);
        }

        return build(vec,0,vec.size() - 1);
    }

    TreeNode*build(vector<int>&vec,int start,int end){

        if(start > end)
            return NULL;

        int m = (start + end) / 2;
        TreeNode *root = new TreeNode(vec[m]);
        root -> left = build(vec, start, m - 1);
        root -> right = build(vec, m + 1, end);

        return root;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}