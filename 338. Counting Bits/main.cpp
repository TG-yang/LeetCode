#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> countBits(int num) {

        vector<int>result;
        for(int i = 0; i <= num; ++i){

            int count = 0, x = i;
            while(x != 0){

                if(x % 2 == 1)
                    ++count;

                x = x >> 1;
            }
            result.push_back(count);
        }

        return result;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}