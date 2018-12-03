#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head->next == NULL || !head)
            return head;
        ListNode*root = new ListNode(0);
        root->next = head;
        ListNode*p1 = root;
        ListNode*p2 = head;
        while(p2 && p2->next != NULL){
            p1->next = p2->next;
            p1 = p1->next;
            p2->next = p1->next;
            p1->next = p2;

            p1 = p1->next;
            p2 = p2->next;
        }
        return root->next;
    }
};

int main() {
    ListNode*head;
    Solution*s =new Solution();
    s->swapPairs(head);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}