#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
private:
    vector<int>ver1;
    vector<int>ver2;
public:
    int compareVersion(string version1, string version2) {
        ver1 = StringToInt(version1);
        ver2 = StringToInt(version2);

        int len = (ver1.size() > ver2.size()) ? ver2.size() : ver1.size();

        for(int i = 0; i < len; ++i){
            if(ver1[i] > ver2[i])
                return 1;
            if(ver1[i] < ver2[i])
                return -1;

        }

        if(ver1.size() > len){
            for(int i = len; i < ver1.size(); ++i)
                if(ver1[i] != 0)
                    return 1;
            return 0;
        }
        if(ver2.size() > len){
            for(int i = len; i < ver2.size(); ++i)
                if(ver2[i] != 0)
                    return 1;
            return 0;
        }

        return 0;
    }

private:
    vector<int> StringToInt(string version){
        int tmp = 0;
        vector<int>ver;
        for(int i = 0; i < version.size(); ++i){
            if(version[i] != '.'){
                tmp = tmp*10 + (version[i] - '0');
            }else{
                ver.push_back(tmp);
                tmp = 0;
            }
            if(i == version.size() - 1)
                ver.push_back(tmp);
        }
        return ver;
    }
};

int main() {
    Solution*s;
    string ver1 = "0.1";
    string ver2 = "1.1";
    s->compareVersion(ver1,ver2);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}