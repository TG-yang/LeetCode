#include <iostream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0 || !head)
            return head;
        int n = 1;
        ListNode *temp = head;
        ListNode *result;
        while(temp->next){
            temp = temp->next;
            ++n;
        }
        temp->next = head;
        int m = n - k % n;
        for(int i = 0; i < m; ++i)
            temp = temp->next;

        result = temp->next;
        temp->next = NULL;
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}