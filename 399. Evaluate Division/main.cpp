#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

class Solution {
public:
    vector<double> calcEquation(vector<pair<string, string>> equations, vector<double>& values, vector<pair<string, string>> queries) {
        map<string,double>hash;
        set<string>set1;

        for(int i = 0; i < equations.size(); ++i){
            string a = equations[i].first;
            string b = equations[i].second;
            double val = values[i];

            hash[a + "->" + a] = 1.0;
            hash[b + "->" + b] = 1.0;
            hash[a + "->" + b] = val;
            hash[b + "->" + a] = 1 / val;

            set1.insert(a);
            set1.insert(b);
        }

        string i, j, k;
        for(auto a = set1.begin(); a != set1.end(); ++a){
            for(auto b = set1.begin(); b != set1.end(); ++b){
                for(auto c = set1.begin(); c != set1.end(); ++c){

                    i = *a; j = *b; k = *c;
                    if(hash.find(i + "->" + k) == hash.end() || hash.find(k + "->" + j) == hash.end())
                        continue;
                    hash[i + "->" + j] = hash[i + "->" + k] * hash[k + "->" + j];
                }
            }
        }

        vector<double>result;
        for(auto query : queries){
            string keyword = query.first + "->" + query.second;
            if(hash.find(keyword) != hash.end())
                result.push_back(hash[keyword]);
            else
                result.push_back(-1.0);
        }

        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}