#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
private:
    vector<string> result;
    vector<string> same{"0", "1", "8"};
    vector<pair<char,char>> two{{'0','0'},{'1','1'},{'6','9'},{'8','8'},{'9','6'}};

public:
    vector<string> findStrobogrammatic(int n) {

        if(n == 0)
            return {};

        helper(n,"");

        return result;
    }

private:
    void helper(int n, string str){

        if(n == 0)
            return result.push_back(str);
        if(n%2 == 1){
            for(auto item : same)
                helper(n - 1, item);
        }

        for(int i = (n==2)?1:0; i < two.size(); i++)
            helper(n-2, two[i].first + str + two[i].second);

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}