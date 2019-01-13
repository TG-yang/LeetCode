#include <iostream>
#include <queue>

using namespace std;

class MovingAverage {
private:
    queue<int>result;
    double sum = 0;
    int size;
public:
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        this->size = size;
    }

    double next(int val) {

        if(result.size() == size){
            sum -= result.front();
            result.pop();
        }
        result.push(val);
        sum += val;

        return sum / result.size();
    }
};



/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param_1 = obj.next(val);
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}