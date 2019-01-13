#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
private:
    int Max = 0;
    vector<string> same = {"0","1","8"};
    vector<pair<char,char>> two{{'0','0'},{'1','1'},{'6','9'},{'8','8'},{'9','6'}};
public:
    int strobogrammaticInRange(string low, string high) {

        int lenLow = low.size();
        int lenHigh = high.size();

        for(int i = lenLow; i <= lenHigh; ++i){
            helper(low,high,i,"");
        }

        return Max;
    }

    void helper(string low, string high, int n, string str){

        if(n == 0 && stol(low) <= stol(str) && stol(high) >= stol(str)){
            ++Max;
            return;
        }
        if(n % 2 == 1){
            for(auto val : same)
                helper(low,high,n - 1,val);
        }
        if(n==0 || n%2==1) return;

        for(int i = (n == 2? 1: 0); i < two.size(); ++i){
            helper(low,high,n - 2, two[i].first + str + two[i].second);
        }

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}