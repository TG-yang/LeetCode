#include <iostream>
#include <cmath>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;

        ListNode*head = new ListNode(min(l1->val,l2->val));
        if(l1->val > l2->val)
            l2 = l2->next;
        else
            l1 = l1->next;
        ListNode*root = head;
        while(l1 && l2){
            if(l1->val > l2->val){
                root->next = l2;
                l2 = l2->next;
            }else{
                root->next = l1;
                l1 = l1->next;
            }
            root = root->next;
        }
        if(!l1 && l2)
            root->next = l2;
        if(!l2 && l1)
            root->next = l1;

        return head;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}