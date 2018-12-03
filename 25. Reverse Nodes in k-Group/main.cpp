#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
private:
    int countSize(ListNode*head){
        int count = 0;
        while(head){
            ++count;
            head = head->next;
        }
        return count;
    }
    ListNode*reverseGroup(ListNode*eachGroup){
        ListNode*pre = eachGroup;
        ListNode*next= eachGroup->next;
        while(next->next != NULL){
            pre = pre->next;
            next = next->next;
        }
        next->next = eachGroup;
        pre->next = NULL;
        return next;
    }
public:
//    ListNode* reverseKGroup(ListNode* head, int k) {
//        if(head == NULL)
//            return NULL;
//        int len = countSize(head);
//        if(len < k)
//            return  head;
//        if(k == 1)
//            return head;
//
//        ListNode*root = new ListNode(-1);
//        int n = 0;
//        root->next = head;
//        while(n + k < len){
//            ListNode*eachGroup = new ListNode(-1);
//            for(int i = 0; i < k; ++i){
//                eachGroup->next = head;
//                head = head->next;
//                eachGroup = eachGroup->next;
//            }
//            root->next = reverseGroup(eachGroup->next);
//            while(root->next != NULL)
//                root = root->next;
//            n += k;
//        }
//        if(len - n - k == 0)
//            root->next =head;
//        return root->next;
//    }
    //在链表头部插入元素，返回插入后的链表头指针
    ListNode* addHead(ListNode*head, ListNode*Node)
    {
        Node->next = head;
        return Node;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = countSize(head);
        ListNode*root = new ListNode(-1);
        ListNode *pNode = root;
        while(len >= k){
            ListNode* pHead = NULL;
            for (int i=0; i<k; i++)
            {
                ListNode*ptmpNode = head;
                head = head->next;
                ptmpNode->next = NULL;
                pHead = addHead(pHead, ptmpNode);
            }
            pNode->next = pHead;
            while(pNode->next)
                pNode = pNode->next;
            len -= k;
        }
        pNode->next = head;
        return root->next;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}