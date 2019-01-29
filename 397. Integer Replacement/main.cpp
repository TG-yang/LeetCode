#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
private:
    int minReplacement = INT_MAX;
public:
    int integerReplacement(int n) {

        helper(n, 0);
        return minReplacement;
    }

private:
    void helper(long n, int times){

        if(n == 1){
            minReplacement = min(minReplacement,times);
            return;
        }
        if(n % 2 == 0){
            helper(n/2, times + 1);
        }else{
            helper(n + 1, times + 1);
            helper(n - 1, times + 1);
        }
    }
};

class Solution {
private:
    int minReplacement;
    unordered_map<int,int>hash;
public:
    int integerReplacement(int n) {

        for(long i = 1; i <= n; ++i){
            minReplacement = INT_MAX;
            hash[i] = helper(i, 0);
        }
    }

private:
    int helper(int n,int times){
        if(n == 1){
            minReplacement = min(minReplacement,times);
            return minReplacement;
        }else if(hash.count(n)){
            minReplacement = min(minReplacement, times + hash[n]);
            return minReplacement;
        }

        if(n % 2 == 0){
            helper(n/2, times + 1);
        }else{
            helper(n + 1, times + 1);
            helper(n - 1, times + 1);
        }

        return minReplacement;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}