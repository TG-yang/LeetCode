#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        map<char,int>mapA;
        map<char,int>mapB;
        buildVector(mapA,a);
        buildVector(mapB,b);
        map<char,int>ret;
        ret['i'] = 0;
        ret['0'] = 0;
        buildResult(mapA,mapB,ret);
        string result = to_string(ret['0']) + '+' + to_string(ret['i']) + 'i';
        return result;
    }

private:
    void buildVector(map<char,int>&map1, string str){
        int val = 0;
        int sign = 1;
        bool isI = false;
        for(int i = 0; i < str.size(); ++i){
            if(str[i] == '+'){
                if(isI){
                    map1['i'] += (sign * val);
                }else
                    map1['0'] += (sign * val);
                val = 0; sign = 1; isI = false;
            }else if(str[i] == '-')
                sign = -1;
            else if(str[i] == 'i')
                isI = true;
            else{
                val = val * 10 + (str[i] - '0');
            }
        }
        if(isI){
            map1['i'] += (sign * val);
        }else
            map1['0'] += (sign * val);

    }

    void buildResult(map<char,int>&mapA,map<char,int>&mapB,map<char,int>&ret){
        ret['i'] = mapA['i'] * mapB['0'] + mapA['0'] * mapB['i'];
        ret['0'] = mapA['0'] * mapB['0'] - mapA['i'] * mapB['i'];
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}