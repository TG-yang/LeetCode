#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

class Solution {
public:
    int findMaximizedCapital(int k, int W, vector<int>& Profits, vector<int>& Capital) {
        multimap<int,int>multimap1;
        for(int i = 0; i < Profits.size(); ++i){
            multimap1.insert(make_pair(Capital[i],Profits[i]));
        }
        priority_queue<int>myProfiles;
        while (k--){
            for(auto iter = multimap1.begin(); iter != multimap1.end(); ++iter){
                if((*iter).first <= W){
                    myProfiles.push((*iter).second);
                    multimap1.erase(iter);
                } else
                    break;
            }
            if(myProfiles.empty()) break;
            W += myProfiles.top();
            myProfiles.pop();
        }
        return W;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}