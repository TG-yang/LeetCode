#include <iostream>
#include <stack>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<ListNode*> stackl1;
        stack<ListNode*> stackl2;

        while (l1){
            stackl1.push(l1);
            l1 = l1->next;
        }
        while (l2){
            stackl2.push(l2);
            l2 = l2->next;
        }
        ListNode*head = NULL;
        int sum = 0;
        while (!stackl1.empty() || !stackl2.empty()){

            if(!stackl1.empty()){
                sum += stackl1.top()->val;
                stackl1.pop();
            }
            if(!stackl2.empty()){
                sum += stackl2.top()->val;
                stackl2.pop();
            }

            ListNode*node = new ListNode(sum % 10);
            sum /= 10;
            node->next = head;
            head = node;
        }

        if(sum != 0){
            ListNode*node = new ListNode(sum);
            node->next = head;
            head = node;
        }

        return head;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}