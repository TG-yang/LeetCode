#include <iostream>
#include <vector>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head -> next)
            return;

        vector<ListNode*>vecNode;
        while(head){
            vecNode.push_back(head);
            head = head->next;
        }

        int i;
        int size = vecNode.size() / 2;
        bool isEven = (vecNode.size() % 2 == 1? false : true);

        for(i = 0; i < size; ++i){
            vecNode[i]->next = vecNode.back();
            vecNode.pop_back();
        }

        for(i = 0; i < vecNode.size() - 1; ++i){
            vecNode[i]->next->next = vecNode[i + 1];
        }

        if(!isEven)
            vecNode[vecNode.size() - 1]->next = NULL;
        else
            vecNode[vecNode.size() - 1]->next->next = NULL;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}