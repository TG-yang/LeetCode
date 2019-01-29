#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {

        if(chars.size() == 1)
            return 1;

        // point is used to point to the position of chars being replaced
        // count is used to count how many characters are there for current char
        int point = 0;
        int count = 1;
        char current = chars[0];

        for(int i = 1; i < chars.size(); ++i){

            if(chars[1] == current)
                ++count;
            else{
                chars[point++] = current;
                if(count > 1){
                    string count_s = to_string(count);
                    for(int k = 0; k < count_s.size(); ++k){
                        chars[point++] = count_s[k];
                    }
                }
                count = 1;
                current = chars[i];
            }
        }

        // last part of the vector chars
        chars[point++] = current;
        if(count > 1){
            string count_s = to_string(count);
            for(int k = 0; k < count_s.size(); ++k){
                chars[point++] = count_s[k];
            }
        }

        return point;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}