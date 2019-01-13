#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> lexicalOrder(int n) {

        vector<int> res;
        for(int i = 1; i < 10; ++i){
            helper(i,n,res);
        }

        return res;
    }

private:
    void helper(int cur, int n, vector<int>&result){
        if(cur > n)
            return;
        else{
            result.push_back(cur);
            for(int i =0; i < 10; ++i){

                if(10 * cur + i > n){

                }else{
                    helper(10 * cur + i, n, result);
                }
            }
        }

        return;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}