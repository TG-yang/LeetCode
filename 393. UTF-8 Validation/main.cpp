#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool validUtf8(vector<int>& data) {

        int count = 0;
        for(auto val : data){

            if(count == 0){
                if(val >> 3 == 0b11110) count = 3;
                else if(val >> 4 == 0b1110) count = 2;
                else if(val >> 5 == 0b110) count  = 1;
                else if(val >> 7 != 0b0) return false;
                continue;
            }
            if(val >> 6 != 0b10) return false;
            --count;
        }

        return count == 0;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}