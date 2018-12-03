#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        int len1 = word1.size();
        int len2 = word2.size();
        vector<vector<int>>result(len1 + 1,vector<int>(len2 + 1,0));

        for(int i = 0; i <= len1; ++i){
            result[i][0] = i;
        }
        for(int j = 0; j <= len2; ++j){
            result[0][j] = j;
        }
        for(int i = 1; i <= len1; ++i){
            for(int j = 1; j <= len2; ++j){
                if(word1[i - 1] == word2[j - 1])
                    result[i][j] = result[i - 1][j - 1];
                else{
                    int temp = min(result[i - 1][j],result[i][j - 1]);
                    result[i][j] = min(result[i - 1][j - 1], temp) + 1;
                }
            }
        }
        return result[len1][len2];
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}