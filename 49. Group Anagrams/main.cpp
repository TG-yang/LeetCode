#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        if(strs.empty())
//            return vector<vector<string> >();
//        int len = strs.size();
//        vector<vector<string> > result;
//
//        for(int i = 0; i < len; ++i){
//
//            if(strs[i] == "A")
//                continue;
//
//            vector<string>oneLine;
//            string temp1 = strs[i];
//            oneLine.push_back(temp1);
//            sort(temp1.begin(),temp1.end());
//
//            for(int j = i + 1; j < len; ++j){
//
//                string temp2 = strs[j];
//                sort(temp2.begin(),temp2.end());
//                if(temp1 == temp2){
//                    oneLine.push_back(strs[j]);
//                    strs[j] = "A";
//                }
//            }
//            sort(oneLine.begin(),oneLine.end());
//            result.push_back(oneLine);
//        }
//        return result;
//    }
//};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty())
            return vector<vector<string> >();
        int len = strs.size();
        vector<vector<string> > result;
        map<string,vector<string> > mapResult;
        sort(strs.begin(),strs.end());

        for(int i = 0; i < len; ++i){

            string temp = strs[i];
            sort(temp.begin(),temp.end());
            mapResult[temp].push_back(strs[i]);
        }
        for(map<string,vector<string> >::iterator it = mapResult.begin();it != mapResult.end(); ++it)
            result.push_back(it->second);
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}