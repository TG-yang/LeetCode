#include <iostream>
#include <string>
#include <stack>

using namespace std;

//class Solution {
//public:
//    string decodeString(string s) {
//        stack<char>stack1;
//        stack1.push(s[0]);
//        int i = 1;
//        int pre = 0;
//        while (!s.empty()){
//
//            if(s[i] != ']'){
//                stack1.push(s[i]);
//                ++i;
//            } else{
//                pre = i;
//                string str = "";
//                while (stack1.top() != '['){
//                    --pre;
//                    str += stack1.top();
//                    stack1.pop();
//                }
//                --pre;
//                reverse(str.begin(),str.end());
//                stack1.pop();
//                string temp = "";
//                while (stack1.top() >= '0' && stack1.top() <= '9' && !stack1.empty()){
//                    --pre;
//                    temp += stack1.top();
//                    stack1.pop();
//                }
//                reverse(temp.begin(),temp.end());
//                int count = 0;
//                for(int j = 0; j < temp.size(); ++j)
//                    count = count * 10 + temp[i] - '0';
//                for(int j = 0; j < count; ++j)
//                    temp += temp;
//
//                int lentemp = temp.size();
//                s = s.substr(0,pre) + temp + s.substr(i + 1);
//                i = pre + lentemp;
//            }
//        }
//
//        return s;
//    }
//};
class Solution {
public:
    string decodeString(string s) {

        string result;
        int start = 0;
        helper(s,start);

        return result;
    }

private:
    string helper(string s, int &i){

        string result  = "";
        while(i < s.size() && s[i] != ']'){
            if(!isdigit(s[i])){
                result += s[i++];
            }else{
                int times = 0;
                while (i < s.size() && isdigit(s[i]))
                    times = times*10 + s[i++] - '0';
                ++i; //jump [
                string temp = helper(s,i);
                ++i; //jump ]
                while (times-- > 0)
                    result += temp;
            }
        }
        return result;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}