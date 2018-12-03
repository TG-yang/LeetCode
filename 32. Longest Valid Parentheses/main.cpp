#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <stack>
using namespace std;

//class Solution {
//private:
//    map<char,char>match={
//            {'(',')'},
//            {')','*'},
//    };
//public:
//    int longestValidParentheses(string s) {
//        int result = 0;
//        int temp = 0;
//        string stack = "";
//        int top = s.size() - 1;
//        int isNext = 0;
//        vector<int> path;
//        while(s.size() > 0){
//            stack += s.at(top);
//            int len = stack.size();
//            s.erase(top--);
//            map<char,char>::iterator it = match.find(stack[len - 1]);
//
//            if(isNext == 2)
//                temp = 0;
//            if(it->second == stack[len - 2]){
//                stack.erase(len - 1);
//                stack.erase(len - 2);
//                temp += 2;
//                isNext = 0;
//            }else{
//                ++isNext;
//            }
//
//            if(temp >= result)
//                result = temp;
//        }
//        return  result;
//    }
//};
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> paranStack;
        int maxLength=0;
        int lastValidIndx=0;
        for (int indx=0; indx<s.length(); indx++) {
            if (s[indx]=='(')
                paranStack.push(indx);
            else {
                if (paranStack.empty())
                    lastValidIndx=indx+1;
                else {
                    paranStack.pop();
                    if (paranStack.empty())
                        maxLength=max(maxLength, indx-lastValidIndx+1);
                    else
                        maxLength=max(maxLength, indx-paranStack.top());
                }
            }
        }
        return maxLength;
    }
};
int main() {
    Solution*s = new Solution();
    std::cout << s->longestValidParentheses("((()))())") << std::endl;
    return 0;
}