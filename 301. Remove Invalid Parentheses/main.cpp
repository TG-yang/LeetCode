#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <queue>

using namespace std;

//class Solution {
//private:
//    vector<string> result;
//public:
//    vector<string> removeInvalidParentheses(string s) {
//
//        helper(s,')',0);
//
//        return result;
//    }
//
//private:
//    void helper(string s, char parenthes,int start){
//
//        for(int i = 0, count = 0; i < s.size(); ++i){
//
//            if(s[i]=='('||s[i]==')')
//                s[i] == parenthes ? ++count : --count;
//            if(count <= 0)
//                continue;
//            for(int j = start; j <= i; ++j){
//
//                if(s[j] == parenthes && (j == start || s[j - 1] != parenthes))
//                    helper(s.substr(0,j) + s.substr(j + 1),parenthes,j);
//            }
//            return;
//        }
//
//        reverse(s.begin(),s.end());
//
//        if(parenthes == ')')
//            return helper(s,'(',0);
//
//        result.push_back(s);
//    }
//};

class Solution {
public:
    vector<string> removeInvalidParentheses(string s){

        unordered_set<string> visited;
        vector<string> result;
        queue<string>queue1;

        visited.insert(s);
        queue1.push(s);

        bool found = false;

        while(!queue1.empty()){

            string str = queue1.front();
            queue1.pop();
            if(isValid(str)){
                result.push_back(str);
                found = true;
            }
            if(found)
                continue;
            for(int i = 0; i < str.size(); ++i){
                if(str[i] != ')' && str[i] != '(')
                    continue;

                string temp = str.substr(0, i) + str.substr(i + 1);
                if(visited.count(temp) == 0){
                    visited.insert(temp);
                    queue1.push(temp);
                }
            }
        }

        if (result.empty()) {
            result.push_back("");
        }
        return result;
    }

private:
    bool isValid(string&s){

        int count = 0;
        for(auto ch : s){
            if(ch == '(')
                ++count;
            else if(ch == ')'){
                --count;
                if(count < 0)
                    return false;
            }
        }

        return count == 0;
    }

};


vector<string> removeInvalidParentheses(string s) {
    vector<string> result;
    unordered_set<string> visited;
    visited.insert(s);
    queue<string> Q;
    Q.push(s);
    bool found = false;
    while (!Q.empty()) {
        string str = Q.front();
        Q.pop();
        if (CheckValid(str)) {
            result.push_back(str);
            found = true;
        }
        if (found == true) {
            continue;
        }
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] != ')' && str[i] != '(') {
                continue;
            }
            string tmp = str.substr(0, i) + str.substr(i + 1);
            if (visited.count(tmp) == 0) {
                visited.insert(tmp);
                Q.push(tmp);
            }
        }
    }
    if (result.empty()) {
        result.push_back("");
    }
    return result;
}

bool CheckValid(const string& str) {
    int count = 0;
    for (auto c : str) {
        if (c == '(') {
            ++ count;
        } else if (c == ')') {
            -- count;
            if (count < 0) {
                return false;
            }
        }
    }
    return count == 0;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}