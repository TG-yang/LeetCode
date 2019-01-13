#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {

        if(citations.size() == 0)
            return 0;

        sort(citations.begin(),citations.end(),compare);

        int i = 0;
        for(i = 0; i < citations.size(); ++i){

            if(i + 1 > citations[i])
                return i;
        }

        if(i == citations.size())
            return i;
    }


    static bool compare(int a, int b){

        return a > b;
    }
};




int main() {
    vector<int>citations = {1,1};
    Solution*s;
    cout << s->hIndex(citations);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}