#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {

        queue<string>q1;
        q1.push(start);
        int step = 0;
        int lenStart = start.size();

        while (!q1.empty()){
            int lenQueue = q1.size();
            for(int i = 0; i < lenQueue; ++i){
                string cur = q1.front(); q1.pop();
                if(cur == end)
                    return step;

                for(int j = 0; j < lenStart; ++j){

                    for(char c : {'A','C','G','T'}){
                        string next = cur.substr(0,j) + c + cur.substr(j + 1);
                        if(next == cur) continue;
                        for(auto it = bank.begin(); it != bank.end(); ++it){
                            if(*it == next){
                                q1.push(next);
                                bank.erase(it);
                                break;
                            }
                        }
                    }
                }
            }
            ++step;
        }
        return -1;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}