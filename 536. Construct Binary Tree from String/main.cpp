#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* str2tree(string s) {
        if(s == "") return NULL;
        int val = 0, i = 0, n = s.size(),j;
        int sign = 1;
        if(s[0] == '-'){
            sign = -1; ++i;
        }
        while(i < n && s[i] != '(') {val = val * 10 + (s[i] - '0'); i++;}
        TreeNode*node = new TreeNode(sign * val);
        if(i == n) return node;
        int num = 1; j = i;
        while (num != 0){
            ++j;
            if(s[j] == '(') ++num;
            else if(s[j] == ')') --num;
        }
        node->left = str2tree(s.substr(i + 1, j - i - 1));
        if(j + 2 < n){
            node->right = str2tree(s.substr(j + 2, n - j - 3));
        }
        return node;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}