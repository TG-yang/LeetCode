#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {

        if(citations.size() == 0)
            return 0;

        reverse(citations.begin(),citations.end());

        int i = 0;
        for(i = 0; i < citations.size(); ++i){

            if(i + 1 > citations[i])
                return i;
        }

        if(i == citations.size())
            return i;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}