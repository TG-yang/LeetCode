#include <iostream>
#include <queue>

using namespace std;

class MyStack {
private:
    queue<int>myStore;
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        myStore.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int val = myStore.back();

        queue<int>temp(myStore);
        myStore = queue<int>();

        while(temp.size() > 1){
            myStore.push(temp.front());
            temp.pop();
        }
        return val;
    }

    /** Get the top element. */
    int top() {

        return myStore.back();
    }

    /** Returns whether the stack is empty. */
    bool empty() {

        return myStore.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}