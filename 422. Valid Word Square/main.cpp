#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool validWordSquare(vector<string>& words) {

        int row = words.size();
        for(int i = 0; i < row; ++i){
            if(words[i].size() > row)
                return false;
            for(int j = i + 1; j < row; ++j){
                if(words[i].size() > j){
                    if(words[i][j] != words[j][i] || words[j].size() < i + 1)
                        return false;
                }else{
                    if(words[j].size() >= i + 1) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}