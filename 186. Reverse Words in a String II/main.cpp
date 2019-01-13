#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseWords(vector<char>& str) {

        reverse(str.begin(),str.end());
        int begin = 0, end = 0;

        for(end; end < str.size(); ++end){

            if(str[end] == ' '){
                reverse(str.begin() + begin,str.begin() + end);
                begin = end + 1;
            }
        }

        reverse(str.begin() + begin,str.end());
    }
};

int main() {
    Solution*solution;
    vector<char> vec = {'t','h','e',' ','s','k','y'};
    solution->reverseWords(vec);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}