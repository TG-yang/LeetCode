#include <iostream>


using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode*sortListNode = new ListNode(-1);
        while(head){
            ListNode* temp = head->next;
            ListNode* cur = sortListNode;
            //使用next来比较 配合new ListNode(-1);
            while (cur->next && cur->next->val < head->val){
                cur = cur->next;
            }
            head->next = cur->next;
            cur->next = head;
            head = temp;
        }
        return sortListNode->next;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}