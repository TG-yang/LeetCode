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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode*prev = head;
        ListNode*curr = head;
        vector<int>value;
        int i = 1;
        while(i <= n){
            if(i < m)
                prev = prev->next;
            if(i >= m)
                value.push_back(curr->val);
            curr = curr->next;
            ++i;
        }
        reverse(value.begin(),value.end());
        for(int i = 0; i < value.size(); ++i){
            cout << value[i] << " ";
            prev->val = value[i];
            prev = prev->next;
        }
        return head;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}