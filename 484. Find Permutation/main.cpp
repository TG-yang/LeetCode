#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> findPermutation(string s) {
        s += 'I';
        vector<int>res;
        stack<int>stk;
        for(int i = 0; i < s.size(); ++i){
            stk.push(i + 1);
            if(s[i] == 'I'){
                while (!stk.empty())
                    res.push_back(stk.top()); stk.pop();
            }
        }

        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}