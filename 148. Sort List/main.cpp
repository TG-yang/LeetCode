#include <iostream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


//class Solution {
//public:
//    ListNode* sortList(ListNode* head) {
//        ListNode*result = new ListNode(-1);
//
//        while(head){
//            ListNode*temp = head->next;
//            ListNode*node1 = result;
//            while(node1->next != NULL && node1->next->val < head->val){
//                node1 = node1->next;
//            }
//            head->next = node1->next;
//            node1->next = head;
//            head = temp;
//        }
//        return result->next;
//    }
//};

class Solution{
public:
    ListNode*sortList(ListNode* head){
        if(!head || !head->next)
            return head;
        ListNode*part1 = NULL;
        ListNode*part2 = NULL;
        returnTwoHalf(head,&part1,&part2);

        return  mergeStep(sortList(part1),sortList(part2));
    }

private:
    void returnTwoHalf(ListNode *head,ListNode **s1,ListNode **s2){
        ListNode* slow = head;
        ListNode* prev = head;
        ListNode* fast = head;
        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        *s2 = slow;
        prev->next = NULL;
        *s1 = head;
    }
    ListNode*mergeStep(ListNode* h1, ListNode* h2){
        if(h1 == NULL)
            return h2;
        if(h2 == NULL)
            return h1;
        ListNode*result = NULL;
        if(h1->val > h2->val){
            result = h2;
            h2 = h2->next;
        }else{
            result = h1;
            h1 = h1->next;
        }
        ListNode*head = result;

        while (h1 && h2){
            if(h1->val > h2->val){
                result->next = h2;
                h2 = h2->next;
            }else{
                result->next = h1;
                h1 = h1->next;
            }
            result = result->next;
        }
        if(!h1)
            result->next = h2;
        if(!h2)
            result->next = h1;

        return head;
    }

};
//class Solution {
//public:
//
//    void returnTwoHalf(ListNode * head, ListNode **s1,ListNode **s2){
//        ListNode* slow = head;
//        ListNode* fast = head;
//        ListNode* prev = head;
//        while(fast!=NULL&&fast->next!=NULL){
//            prev = slow;
//            fast = fast->next->next;
//            slow = slow->next;
//        }
//        *s2 = slow;
//        prev->next = NULL;
//        *s1 = head;
//    }

//    ListNode* mergeStep(ListNode* h1,ListNode *h2){
//        if(h1==NULL)
//            return h2;
//        if(h2==NULL)
//            return h1;
//        ListNode* result = NULL;
//        if(h1->val < h2->val){
//            result = h1;
//            h1= h1->next;
//        }
//        else{
//            result = h2;
//            h2 = h2->next;
//        }
//        ListNode* head= result;
//
//        while(h1!=NULL && h2!=NULL){
//            if(h1->val < h2->val){
//                result->next = h1;
//                h1= h1->next;
//            }
//            else{
//                result->next = h2;
//                h2 = h2->next;
//            }
//            result = result->next;
//        }
//        if(h1!=NULL){
//            result->next = h1;
//
//        }
//        else if(h2!=NULL){
//            result->next = h2;
//        }
//        return head;
//    }
//
//
//
//    ListNode* sortList(ListNode* head) {
//        if(head == NULL || head->next == NULL)
//            return head;
//        ListNode *part1 = NULL;
//        ListNode *part2 = NULL;
//        returnTwoHalf(head,&part1,&part2);
//        // sortList(part1);
//        // sortList(part2);
//        return mergeStep(sortList(part1),sortList(part2));
//    }
//};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}