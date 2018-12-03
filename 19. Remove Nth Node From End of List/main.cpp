#include <iostream>

using namespace std;


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL)
            return NULL;
        ListNode*n1,*n2,*n3;
        int number = 0;
        n1 = head;
        n2 = head->next;
        if(n2 == NULL){
            if(n == 1)
                return NULL;
        }
        n3 = n2->next;
        if(n3 == NULL){
            if(n == 1){
                n1->next = n3;
                return n1;
            }
            if(n == 2)
                return n2;
        }
        long int i = 0,count = 0, aimPoint;
        while(n1->next != NULL) {
            count += 8;
            n1 = n1->next;
        }
        aimPoint = (count - n * 8) / 8 + 1;
        if(aimPoint == 0){
            return n2;
        }
        while(i < aimPoint - 1){
            n1 = n2;
            n2 = n3;
            n3 = n3->next;
            ++i;
        }
        n1->next = n3;
        return head;
    }
};


// 1 2 3 4 5  1 2
int main() {
    ListNode*ln,*ln1,*ln2;
    ln->val = 1;
    ln1->val = 2;
    ln2->val = 3;
    ln->next = ln1;
    ln1->next = ln2;
    Solution*s = new Solution();
    s->removeNthFromEnd(ln,2);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}