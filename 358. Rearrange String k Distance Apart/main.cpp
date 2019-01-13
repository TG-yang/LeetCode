#include <iostream>
#include <string>
#include <queue>
#include <map>

using namespace std;

class Solution {
public:
    string rearrangeString(string s, int k) {

        if(k == 0)
            return s;
        int len = s.size();
        priority_queue<pair<int,char>>queue1;
        map<char,int>hash;
        string result = "";

        for(auto c : s)
            hash[c]++;
        for(auto myPair : hash)
            queue1.push(make_pair(myPair.second,myPair.first));

        while(!queue1.empty()){
            vector<pair<int,char>>temp;
            int count = min(k,len);

            for(int i = 0; i < count; ++i, --len){

                if(queue1.empty())
                    return "";

                auto q = queue1.top();
                queue1.pop();
                q.first--;
                result+=q.second;
                if(q.first > 0)
                    temp.push_back(q);
            }
            for(auto item : temp)
                queue1.push(item);
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}