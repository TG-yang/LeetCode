#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode result(0);
        ListNode mid(0);
        ListNode*smallNode,*largeNode;
        smallNode = &result;
        largeNode = &mid;
        while(head){
            if(head->val < x){
                smallNode->next = head;
                smallNode = smallNode->next;
            }else{
                largeNode->next = head;
                largeNode = largeNode->next;
            }
            head = head->next;
        }
        largeNode->next = NULL;
        smallNode->next = mid.next;

        return result.next;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}