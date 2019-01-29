#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int wordsTyping(vector<string>& sentence, int rows, int cols) {

        string withSpace = "";
        int start = 0;

        for(auto word : sentence)
            withSpace += (word + " ");

        int len = withSpace.size();

        for(int i = 0; i < rows; ++i){
            start += cols;
            if(withSpace[start % len] == ' ')
                ++start;
            else{
                while(start > 0 && withSpace[(start - 1) % len] != ' ')
                    --start;
            }
        }

        return start / len;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}