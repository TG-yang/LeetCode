#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {

        unordered_map<string,vector<string>>hash;
        vector<vector<string>>result;

        for(int i = 0; i < strings.size(); ++i){
            hash[helper(strings[i])].push_back(strings[i]);
        }

        for(auto val : hash){
            sort(val.second.begin(),val.second.end());
            result.push_back(val.second);
        }

        return result;
    }

private:

    string helper(string input){

        string key = "";
        for(int i = 0; i < input.size() - 1; ++i){

            int diff = (input[i] > input[i + 1] ? input[i] - input[i + 1] : input[i] - input[i + 1] + 26);
            char num = 'a' + diff;
            key += num;
        }

        return key;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}