#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

//class Solution {
//private:
//    vector<string>result;
//public:
//    vector<string> findRepeatedDnaSequences(string s) {
//
//        if(s.size() < 10)
//            return vector<string>();
//
//        for(int j = 0; j < s.size() - 10; ++j){
//            string temp = s.substr(j,10);
//            if(checkExist(temp))
//                continue;
//            for(int i = j + 1; i <= s.size() - 10; ++i){
//                string compareString = s.substr(i,10);
//                if(temp == compareString){
//                    result.push_back(temp);
//                    break;
//                }
//            }
//        }
////        set<string>middleSet(result.begin(),result.end());
////        result.assign(middleSet.begin(),middleSet.end());
//
//        return result;
//    }
//
//    bool checkExist(string s){
//        for(int i = 0; i < result.size(); ++i)
//            if(s == result[i])
//                return true;
//
//        return false;
//    }
//};


//A: 0100 0001　　C: 0100 0011　　G: 0100 0111　　T: 0101 0100

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s){
        vector<string>result;
        if(s.size() <= 10)
            return result;

        int mask = 0x7ffffff;
        unordered_map<int,int>m;
        int cur = 0, i = 0;
        while(i < 9){
            cur = (cur << 3) | (s[i++] & 7);
        }

        while(i < s.size()){
            cur = ((cur & mask) << 3 | s[i++] & 7);

            if(m.find(cur) != m.end()){
                if(m[cur] == 1){
                    result.push_back(s.substr(i - 10,10));
                }
                ++m[cur];
            }else{
                m[cur] = 1;
            }
        }
        return result;
    }
};

int main() {
    Solution*s;
    s->findRepeatedDnaSequences("AAAAAAAAAAA");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}