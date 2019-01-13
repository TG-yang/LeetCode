#include <iostream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* plusOne(ListNode* head) {

        ListNode*node = new ListNode(0);
        node->next = head;

        helper(head, node);

        if(node->val)
            return node;
        else
            return node->next;
    }

private:
    void helper(ListNode*head, ListNode*pre){

        if(!head){
            pre->val += 1;
            return;
        }
        helper(head->next,head);

        if(head->val == 10){
            head->val = 0;
            pre->val += 1;
        }
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}