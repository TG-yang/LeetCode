#include <iostream>
#include <map>

using namespace std;

class Solution {
private:
    map<int,int>map1;
public:
    int integerBreak(int n) {

        int result = n - 1;

        for(int i = 1; i < n; ++i){
            int t = i * helper(n - i);

            if(t > result)
                result = t;
        }

        return result;
    }

    int helper(int n){

        if(map1[n] != 0)
            return map1[n];

        int result = n;
        for(int i = 1; i < n; ++i){
            int t = i * helper(n - i);
            if(t > result)
                result = t;
        }
        map1[n] = result;
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}