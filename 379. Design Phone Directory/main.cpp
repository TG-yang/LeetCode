#include <iostream>
#include <unordered_map>

using namespace std;

class PhoneDirectory {
private:
    unordered_map<int,int>hash;
    unordered_map<int,int>pool;

public:
    /** Initialize your data structure here
        @param maxNumbers - The maximum numbers that can be stored in the phone directory. */
    PhoneDirectory(int maxNumbers) {

        for(int i = 0; i < maxNumbers; ++i){
            pool[i]++;
        }
    }

    /** Provide a number which is not assigned to anyone.
        @return - Return an available number. Return -1 if none is available. */
    int get() {

        for(auto val : pool){
            pool.erase(val.first);
            hash[val.first] = val.second;
            return val.first;
        }
        return -1;
    }

    /** Check if a number is available or not. */
    bool check(int number) {

        if(hash.count(number))
            return false;
        else
            return true;
    }

    /** Recycle or release a number. */
    void release(int number) {

        if(hash.count(number)){
            hash.erase(number);
            pool[number]++;
        }
    }
};

/**
 * Your PhoneDirectory object will be instantiated and called as such:
 * PhoneDirectory obj = new PhoneDirectory(maxNumbers);
 * int param_1 = obj.get();
 * bool param_2 = obj.check(number);
 * obj.release(number);
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}