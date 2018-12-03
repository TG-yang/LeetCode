#include <iostream>
#include <vector>

using namespace std;

//class MinStack {
//private:
//    vector<int>vec;
//public:
//    /** initialize your data structure here. */
//    MinStack() {
//
//    }
//
//    void push(int x) {
//        vec.push_back(x);
//    }
//
//    void pop() {
//        vec.pop_back();
//    }
//
//    int top() {
//        return vec.back();
//    }
//
//    int getMin() {
//        int min = INT_MAX;
//        for(int i = 0; i < vec.size(); ++i)
//            if(min > vec[i])
//                min = vec[i];
//        return min;
//    }
//};
struct StackEntry{
    int value;
    int minseen;
    StackEntry *next;
};

static  StackEntry stacktoheap[8000];

class MinStack{
private:
    StackEntry*stacktop = NULL;
    int headtop = 0;
public:
    MinStack(){}

    void push(int x){
        StackEntry*newEntry = &stacktoheap[headtop++];
        newEntry->next = stacktop;
        newEntry->value = x;
        if(stacktop == NULL)
            newEntry->minseen = x;
        else
            newEntry->minseen = (x > stacktop->minseen) ? stacktop->minseen : x;
        stacktop = newEntry;
    }

    void pop(){
        stacktop = stacktop->next;
    }
    int top(){
        return stacktop->value;
    }
    int getMin(){
        return stacktop->minseen;
    }
};
//struct StackEntry
//{
//    int value;
//    int minseen;
//    StackEntry *next;
//};
//
//static StackEntry stacktoheap[8000]; //going for pure speed. just enough to pass tests. no heap usage :)
//
//class MinStack {
//public:
//
//    StackEntry *stacktop = nullptr;
//    int heaptop = 0;
//    MinStack() {}
//
//    void push(int x) {
//        StackEntry *newEntry = &stacktoheap[heaptop++];
//        newEntry->next = stacktop;
//        newEntry->value = x;
//        if(stacktop == nullptr) newEntry->minseen = x;
//        else newEntry->minseen = (x > stacktop->minseen) ? stacktop->minseen : x;
//        stacktop = newEntry;
//    }
//
//    void pop() {
//        stacktop = stacktop->next;
//    }
//
//    int top() {
//        return stacktop->value;
//    }
//
//    int getMin() {
//        return stacktop->minseen;
//    }
//};




/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}