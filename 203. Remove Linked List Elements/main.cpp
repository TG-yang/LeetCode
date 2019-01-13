#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return head;

        ListNode*root = new ListNode(-1);
        root->next = head;
        ListNode*temp = root;

        while(temp && temp->next){

            if(temp->next->val == val){
                temp->next = temp->next->next;
            }else{
                temp = temp->next;
            }
        }

        return root->next;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}