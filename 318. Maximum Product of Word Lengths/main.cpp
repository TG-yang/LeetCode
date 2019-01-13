#include <iostream>
#include <vector>
#include <string>

using namespace std;

//class Solution {
//public:
//    int maxProduct(vector<string>& words) {
//
//        vector<vector<int>>result;
//        int wordsMax = INT_MIN;
//
//        for(int i = 0; i < words.size(); ++i){
//
//            for(int j = i + 1; j < words.size(); ++j){
//
//                vector<char> vecI(words[i].begin(),words[i].end());
//                vector<char> vecJ(words[j].begin(),words[j].end());
//                int lenI = vecI.size();
//                int lenJ = vecJ.size();
//                vector<char>::iterator it = vecI.begin();
//
//                for(it; it != vecI.end(); ++it){
//
//                    if(find(vecJ.begin(),vecJ.end(),*it) != vecJ.end()){
//                        lenI = 0;
//                        lenJ = 0;
//                        break;
//                    }
//                }
//
//                wordsMax = wordsMax > lenI * lenJ ? wordsMax : lenI * lenJ;
//
//            }
//        }
//
//        if(wordsMax == INT_MIN)
//            return 0;
//
//        return wordsMax;
//    }
//
//};

class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int> mask(words.size(), 0);
        int maxPro = 0;
        for (int i = 0; i < words.size(); i++){
            int len = words[i].size();
            for (char c:words[i]){
                mask[i] |= (1 << (c - 'a'));
            }
            for (int j = 0; j < i; j++){
                if ((mask[i] & mask[j]) == 0){
                    int pro = words[i].size()*words[j].size();
                    if (pro > maxPro){
                        maxPro = pro;
                    }
                }
            }
        }

        return maxPro;
    }
};



int main() {
    Solution*S;
    vector<string> str = {"eae","ea","aaf","bda","fcf","dc","ac","ce","cefde","dabae"};

    std::cout << S->maxProduct(str) << std::endl;
    return 0;
}