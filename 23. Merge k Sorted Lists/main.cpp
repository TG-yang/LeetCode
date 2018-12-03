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
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        if(lists.size() == 0)
//            return NULL;
//        if(lists.size() == 1)
//            return lists.at(0);
//        int j = 0;
//        for(int i = 1; i < lists.size(); ++i){
//            if(lists.at(j)->val > lists.at(i)->val)
//                j = i;
//        }
//        ListNode*root = new ListNode(lists.at(j)->val);
//        lists.at(j) = lists.at(j)->next;
//        ListNode*nextNode = root;
//        while(true){
//            int j = 0;
//            while(!lists.at(j)) ++j;
//            if(j == lists.size())
//                break;
//            for(int i = j + 1; i < lists.size();++i){
//                if(!lists.at(i))
//                    continue;
//                if(lists.at(j)->val > lists.at(i)->val)
//                    j = i;
//            }
//            root->next = lists.at(j);
//            lists.at(j) = lists.at(j)->next;
//            root = root->next;
//        }
//
//        return root;
//    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        return mergeKLists(lists,0,lists.size() - 1);
    }

private:
    ListNode*mergeKLists(vector<ListNode*>&lists,int begin, int end){
        if(begin == end)
            return lists.at(begin);
        if(begin < end){
            int mid = (end + begin) / 2;
            ListNode*l1 = mergeKLists(lists, begin, mid);
            ListNode*l2 = mergeKLists(lists, mid + 1, end);
            return mergeTwoLists(l1, l2);
        }
        return NULL;
    }
    ListNode*mergeTwoLists(ListNode*l1, ListNode*l2){
        if(l2 == NULL) return l1;
        if(l1 == NULL) return l2;
        ListNode*root = new ListNode(-1);
        ListNode*nextNode = root;
        while(l1&&l2){
            if(l1->val > l2->val){
                nextNode->next = l2;
                l2 = l2->next;
            }
            else{
                nextNode->next = l1;
                l1 = l1->next;
            }
            nextNode = nextNode->next;
        }
        if(!l1 && l2)
            nextNode->next = l2;
        if(l1 && !l2)
            nextNode->next = l1;
        return root->next;

//        if(l1->val > l2->val){
//            ListNode*temp = l2;
//            temp->next = mergeTwoLists(l1,l2->next);
//            return temp;
//        }else{
//            ListNode*temp = l1;
//            temp->next = mergeTwoLists(l1->next,l2);
//            return temp;
//        }


    }
};
int main() {
    ListNode*l1 = new ListNode(1);
    l1->next->val = 4;
    l1->next->next->val = 5;
    ListNode*l2 = new ListNode(1);
    l2->next->val = 3;
    l2->next->next->val = 4;
    ListNode*l3 = new ListNode(2);
    l2->next->val = 6;
    vector<ListNode*>lists = {l1,l2,l3};
    Solution*s = new Solution();
    ListNode*l = s->mergeKLists(lists);
    while(l){
        cout << l->val <<" ";
        l = l->next;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}