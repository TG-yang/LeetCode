#include <iostream>
#include <random>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head):cur(head) {
    }

    /** Returns a random node's value. */
    int getRandom() {
        int val=cur->val;
        ListNode *temp=cur;
        for(int i=0;temp!=nullptr;temp=temp->next,++i)
        {
            uniform_int_distribution<unsigned> u(0,i);
            default_random_engine e(rand());//真正随机的种子
            unsigned int m=u(e);
            cout << m << " ";
            if(m<1)
            {
                val=temp->val;
            }
        }
        return val;
    }
private:
    ListNode *cur;
};

//uniform_int_distribution的随机数的范围不是半开范围[  )，而是[  ]，对于uniform_real_distribution却是半开范围[  )

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */


int main() {
    uniform_int_distribution<unsigned> u(0,9);
    default_random_engine e(rand());//真正随机的种子
    unsigned int m=u(e);

    cout << m << ' ';
    cout << endl;

    return 0;
}