#include <iostream>
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
    int closestValue(TreeNode* root, double target) {

        int res = root->val;

        while (root){
            if(abs(res - target) >= abs(root->val - target))
                res = root->val;

            root = root->val > target ? root->left : root->right;
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}