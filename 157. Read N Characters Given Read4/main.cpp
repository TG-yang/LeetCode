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
        if(n == 0)
            return 0;
        int read = 0;
        char buffer4[4];
        while(true)
        {
            int r = read4(buffer4);
            for(int i = 0;i<r && read<n;i++)
            {
                buf[read++]= buffer4[i];
            }
            if(r != 4)
                break;
        }
        return read;
    }


};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}