#include <iostream>
#include<cstdlib>
#include<string>
#include<list>

using namespace std;


 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };


class Solution {
public:
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//
//        ListNode* result = NULL;
//        int sum, digit, carry;
//
//        do {
//
//            if (l1 == NULL){
//                result = l2;
//                break;
//            }
//
//            if (l2 == NULL){
//                result = l1;
//                break;
//            }
//            sum = l1->val + l2->val;
//            digit = sum%10;
//            carry = sum/10;
//            result = new ListNode(digit);
//            ListNode* temp = result;
//            l1 = l1->next;l2 = l2->next;
//            while(l1 != NULL || l2 != NULL){
//                sum = ((l1 != NULL) ? l1->val : 0) + ((l2 != NULL) ? l2->val : 0) +carry;
//                digit = sum%10;
//                carry = sum/10;
//                ListNode* newPoint = new ListNode(digit);
//                temp->next = newPoint;
//                temp = newPoint;
//                l1 = (l1 != NULL) ? l1->next : NULL;
//                l2 = (l2 != NULL) ? l2->next : NULL;
//            }
//            if(carry == 1){
//                ListNode* newPoint = new ListNode(carry);
//                temp->next = newPoint;
//            }
//
//        }while(false);
//
//        return result;
//    }
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//
//        ListNode* result = new ListNode(0);
//        int sum, digit, carry = 0;
//        ListNode* temp = result;
//
//        while(l1 != NULL || l2 != NULL) {
//            sum = ((l1 != NULL) ? l1->val : 0) + ((l2 != NULL) ? l2->val : 0) + carry;
//            digit = sum % 10;
//            carry = sum / 10;
//
//            ListNode* newPoint = new ListNode(digit);
//            temp->next = newPoint;
//            temp = newPoint;
//
//            l1 = (l1 != NULL) ? l1->next : NULL;
//            l2 = (l2 != NULL) ? l2->next : NULL;
//        };
//        if(carry == 1) {
//            ListNode *newPoint = new ListNode(carry);
//            temp->next = newPoint;
//        }
//        return result->next;
//    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* result = new ListNode(0);
        int sum, digit, carry = 0;
        ListNode* temp = result;

        while(l1 != NULL || l2 != NULL) {
            sum = ((l1 != NULL) ? l1->val : 0) + ((l2 != NULL) ? l2->val : 0) + carry;
            digit = sum % 10;
            carry = sum / 10;

            ListNode* newPoint = new ListNode(digit);
            temp->next = newPoint;
            temp = newPoint;

            l1 = (l1 != NULL) ? l1->next : NULL;
            l2 = (l2 != NULL) ? l2->next : NULL;
        };
        if(carry == 1) {
            ListNode *newPoint = new ListNode(carry);
            temp->next = newPoint;

        return result->next;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}