#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        for(int i = s.size() - 1; i >= 0; --i){
            for(int j = s.size() - 1; j > i; --j){
                if(s[j] > s[i]){
                    swap(s[j], s[i]);
                    sort(s.begin() + i + 1, s.end());
                    return stoll(s) > INT_MAX ? - 1 : stoll(s);
                }
            }
        }

        return -1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}