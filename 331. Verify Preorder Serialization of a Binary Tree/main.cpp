#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isValidSerialization(string preorder) {

        istringstream in(preorder);
        vector<string>vec;
        string s = "";
        int count = 0;
        while(getline(in,s,','))
            vec.push_back(s);

        for(int i = 0; i < vec.size() - 1; ++i){

            if(count < 0)
                return false;
            if(vec[i] == "#")
                --count;
            else
                ++count;
        }

        return count == 0 && vec[vec.size() - 1] == "#";
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}