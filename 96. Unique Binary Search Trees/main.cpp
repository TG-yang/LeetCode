#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numTrees(int n) {
        vector<int> node(n + 1, 0);
        node[0] = 1;
        node[1] = 1;

        for(int i = 2; i <= n; ++i){

            for(int j = 0; j < i; ++j){
                node[i] += node[j] * node[i - j - 1];
            }
        }

        return node[n];
    }
};

//1. 选取一个结点为根，就把结点切成左右子树
//2. 以这个结点为根的可行二叉树数量就是左右子树可行二叉树数量的乘积
//3. 所以总的数量是将以所有结点为根的可行结果累加起来。也就是上述公式。

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}