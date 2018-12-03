#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    void generateParenthesis(vector<string>&result, string s, int left, int right){
        if(left == 0 && right == 0)
            result.push_back(s);
        if(left > 0)
            generateParenthesis(result, s + "(", left - 1, right);
        if(right > 0 && right > left)
            generateParenthesis(result, s + ")", left, right - 1);
    }
public:
    vector<string> generateParenthesis(int n) {
        if(n == 0)
            return vector<string>();
        vector<string> result;
        string str = "";
        generateParenthesis(result, str, n, n);
        return result;
    }
};

int main() {
    string str = "123";
    str.insert(3,"0");
    cout << str;
    return 0;
}