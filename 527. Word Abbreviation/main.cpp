#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> wordsAbbreviation(vector<string>& dict) {
        vector<pair<string, int>>d;
        for(int i = 0; i < dict.size(); ++i){
            d.push_back(make_pair(dict[i],i));
        }
        sort(d.begin(),d.end(),compare);
        vector<int>pre_common(d.size(),0), post_common(d.size(),0);
        for(int i = 1; i <d.size(); ++i){
            pre_common[i] = commonLenght(d[i - 1].first, d[i].first);
        }
        for(int i = 0; i + 1 < d.size(); ++i){
            post_common[i] = commonLenght(d[i].first,d[i + 1].first);
        }
        vector<string> ret(dict.size(), "");
        for(int i = 0; i < d.size(); ++i){
            int least_common = max(pre_common[i],post_common[i]);
            if(least_common + 3 < d[i].first.size()){
                d[i].first = d[i].first.substr(0,least_common + 1) + to_string(d[i].first.size()
                        - least_common - 2) + d[i].first.back();
            }
            ret[d[i].second] = d[i].first;
        }

        return ret;
    }

private:
    static bool compare(pair<string,int>a, pair<string,int>b){
        const string&s1 = a.first;
        const string&s2 = b.first;
        if(s1.size() == s2.size()){
            if(s1.back() == s2.back()){
                return s1 < s2;
            }else{
                return s1.back() < s2.back();
            }
        }else{
            return s1.size() < s2.size();
        }
    }
    int commonLenght(const string&s1, const string&s2) const{
        if(s1.size() != s2.size() || s1.back() != s2.back()){
            return 0;
        }else{
            for(int i = 0; i < s1.size(); ++i){
                if(s1[i] != s2[i])
                    return i;
            }
            return s1.size();
        }
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}