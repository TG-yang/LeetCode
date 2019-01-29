#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        if (p.size() > s.size() || p.size() == 0) return {};
        vector<int>hash(26,0);
        vector<int>result;
        for(int i = 0; i < p.size(); ++i){
            ++hash[p[i] - 'a'];
        }
        int lenp = p.size();
        int count = lenp;
        int left = 0, right = 0;
        while (right < s.size()){

            if(hash[s[right++] - 'a']-->= 1) --count;
            if(count == 0) result.push_back(left);
            if(right - left == lenp && hash[s[left++] - 'a']++ >= 0) ++count;
        }

        return result;
    }
};

int main() {
    Solution*solution;
    solution->findAnagrams("dddabc","abc");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}