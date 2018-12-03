#include <iostream>
#include <string>
#include <sstream
#include <vector>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {

        stringstream ss(path);
        string midAddress, result;
        vector<string> vec;

        while(getline(ss,midAddress,'/')){
            if( midAddress == ".." && !vec.empty())
                vec.pop_back();
            if(midAddress != ".." && midAddress != "." && midAddress != "")
                vec.push_back(midAddress);
        }
        for(string s : vec)
            result += "/" + s;
        return  result.empty()? "/" : result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}