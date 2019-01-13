#include <iostream>
#include <vector>

using namespace std;

class MyQueue {
    vector<int>item;
    int i = 0;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        item.push_back(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {

        return item[i++];
    }

    /** Get the front element. */
    int peek() {

        return item[i];
    }

    /** Returns whether the queue is empty. */
    bool empty() {

        if(item.size() == i)
            return true;
        else
            return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}