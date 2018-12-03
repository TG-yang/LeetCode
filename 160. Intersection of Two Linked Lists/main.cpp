#include <iostream>
#include <unordered_map>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//class Solution {
//public:
//    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//        unordered_map<ListNode*,int>ListMap;
//
//        while(headA && headB){
//
//            if(ListMap.find(headA) != ListMap.end())
//                return headA;
//            if(ListMap.find(headB) != ListMap.end())
//                return headB;
//
//            ListMap[headA]++;
//            ListMap[headB]++;
//
//            headA = headA->next;
//            headB = headB->next;
//        }
//        if(headA){
//            if(ListMap.find(headA) != ListMap.end())
//                return headA;
//            ListMap[headA]++;
//            headA = headA->next;
//        }
//        if(headB){
//            if(ListMap.find(headB) != ListMap.end())
//                return headB;
//            ListMap[headB]++;
//            headB = headB->next;
//        }
//        return NULL;
//    }
//};
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        int la = 0;
        int lb = 0;
        if (headA && headB)
        {
            while (headA->next && headB->next)
            {
                headA = headA->next;
                headB = headB->next;
            }
        }
        if (headA)
        {
            la++;
            while (headA->next)
            {
                la++;
                headA = headA->next;
            }
        }
        if (headB)
        {
            lb++;
            while (headB->next)
            {
                lb++;
                headB = headB->next;
            }
        }

        if (la > lb)
        {
            int differ = la - lb;
            while (differ > 0)
            {
                differ--;
                a = a->next;
            }
        }
        else
        {
            int differ = lb - la;
            while (differ > 0)
            {
                differ--;
                b = b->next;
            }
        }

        while (a != b)
        {
            a = a->next;
            b = b->next;
        }
        return a;
    }
};


int main() {
    ListNode*headA;
    ListNode*headB = new ListNode(1);
    Solution*s;
    s->getIntersectionNode(headA,headB);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}