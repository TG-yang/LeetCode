#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode*pDel = new ListNode(0);
        pDel->next = head;
        ListNode*prev = pDel;
        ListNode*curr = pDel->next;

        while(curr->next){
            if(curr->next->val != curr->val){
                if(prev->next == curr)
                    prev = curr;
                else{
                    prev->next = curr->next;
                }
            }
            curr = curr->next;
        }
        if(prev->next != curr){
            prev->next = curr->next;
        }
        return pDel->next;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}