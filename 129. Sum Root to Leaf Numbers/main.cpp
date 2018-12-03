#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    int result = 0;
public:
    int sumNumbers(TreeNode* root) {
        if(root == NULL)
            return 0;
        sumNumbers(root,0);
        return result;
    }

    void sumNumbers(TreeNode* root,int sum){

        if(root->left == NULL && root->right == NULL){
            sum = sum * 10 + root->val;
            result += sum;
            return;
        }else{
            sum = sum * 10 + root->val;
            if(root->left)
                sumNumbers(root->left,sum);
            if(root->right)
                sumNumbers(root->right,sum);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}