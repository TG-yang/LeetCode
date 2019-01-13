#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {

        vector<int>vec1;

        while(head){
            vec1.push_back(head->val);
            head = head->next;
        }
        vector<int>vec2 = vec1;
        reverse(vec1.begin(),vec1.end());

        if(vec1 == vec2)
            return true;
        else
            return false;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}