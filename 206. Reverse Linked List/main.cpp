#include <iostream>
#include <vector>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(!head || !head->next)
            return head;

        ListNode*pre = head;
        ListNode*cur = head->next;

        pre->next = cur->next;
        cur->next = pre;
        ListNode*temp = cur;
        cur = pre;
        pre = temp;
        if(!cur->next)
            return pre;

        ListNode*next = cur->next;

        while(1){
            cur->next = next->next;
            next->next = pre;
            pre = next;
            if(cur->next)
                next = cur->next;
            else
                break;
        }

        return pre;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}