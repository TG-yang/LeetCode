#include <iostream>
#include <unordered_map>

using namespace std;

class Logger {
private:
    unordered_map<string,int> hash;
public:
    /** Initialize your data structure here. */
    Logger() {

    }

    /** Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. */
    bool shouldPrintMessage(int timestamp, string message) {

        if(hash.count(message) == 0 || (hash[message] - timestamp >= 10)){
            hash[message] = timestamp;
            return true;
        }

        return false;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger obj = new Logger();
 * bool param_1 = obj.shouldPrintMessage(timestamp,message);
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}