#include <iostream>
#include <unordered_map>
using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int>CountNode;

        while(head){
            CountNode[head]++;
            while(CountNode[head] > 1)
                return head;
            head = head->next;
        }

        return NULL;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}