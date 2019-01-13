#include <iostream>
#include <map>

using namespace std;

bool knows(int a, int b);

class Solution {
public:
    int findCelebrity(int n) {
        map<int,int>hash;

        for(int i = 0; i < n; ++i){

            for(int j = 0; j < n; ++j){

                if(i == j)
                    continue;
                if(knows(i,j)){
                    hash[j]++;
                    hash[i]--;
                }
            }

        }

        for(int i = 0; i < n; ++i){

            if(hash[i] == n - 1)
                return i;
        }

        return -1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}