#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        vector<int> ret;
        for (int i = 0; i < input.size(); ++i){

            if(input[i] == '-' || input[i] == '+' || input[i] == '*'){

                vector<int>left = diffWaysToCompute(input.substr(0,i));
                vector<int>right = diffWaysToCompute(input.substr(i + 1));

                for(int l = 0; l < left.size(); ++l){

                    for(int r = 0; r < right.size(); ++r){

                        switch (input[i]){
                            case '+':
                                ret.push_back(left[l] + right[r]);
                                break;
                            case '-':
                                ret.push_back(left[l] - right[r]);
                                break;
                            case '*':
                                ret.push_back(left[l] * right[r]);
                                break;

                        }
                    }
                }
            }
        }

        if(ret.empty())
            ret.push_back(atoi(input.c_str()));

        return ret;
    }
};

int main() {
    Solution*s;
    string str = "2*3-4*5";
    s->diffWaysToCompute(str);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}