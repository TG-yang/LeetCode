#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    bool verifyPreorder(vector<int>& preorder) {
        int low = INT_MIN;
        stack<int>stack1;

        for(auto val : preorder){
            if(val < low)
                return false;
            while(!stack1.empty() && val > stack1.top()){
                low = stack1.top();
                stack1.pop();
            }
            stack1.push(val);
        }

        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}