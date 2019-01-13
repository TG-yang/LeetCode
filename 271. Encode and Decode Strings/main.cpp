#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Codec {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string str = "";
        for(auto s : strs){
            str.append(to_string(s.size()).append("/").append(s));
        }

        return str;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            auto found = s.find("/",i);
            int len = atoi(s.substr(i,found).c_str());
            res.push_back(s.substr(found + 1, len));
            i = found + len + 1;
        }
        return res;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}