#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minSize = INT_MAX;
        string result = "";
        string minSizeString;
        for(int i = 0; i < strs.size(); ++i){
            if(minSize > strs.at(i).size()){
                minSize = strs.at(i).size();
                minSizeString = strs.at(i);
            }
        }
        for(int i = 0; i < minSize; ++ i){
            bool isExist = true;
            for(int j = 0; j < strs.size(); ++j){
                if(strs.at(j)[i] != minSizeString[i]){
                    isExist = false;
                    break;
                }
            }
            if(isExist == false)
                break;
            else
                result += minSizeString[i];
        }
        return result;
    }
};

int main() {
    vector<string> strs = {""};
    Solution*s = new Solution();
    std::cout << s->longestCommonPrefix(strs) << std::endl;
    return 0;
}