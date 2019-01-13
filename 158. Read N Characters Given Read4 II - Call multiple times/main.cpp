#include <iostream>

using namespace std;

// Forward declaration of the read4 API.
int read4(char *buf);

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Maximum number of characters to read
     * @return    The number of characters read
     */
    int read(char *buf, int n) {

        for(int i = 0; i < n; ++i){
            if(readPos == writePos){
                writePos = read4(buffer);
                readPos = 0;
//                if (writePos == 0) return i;
            }

            buf[i] = buffer[readPos++];
            if(writePos != 4)
                return i;
        }
        return n;
    }

private:
    int readPos = 0, writePos = 0;
    char buffer[4];
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}