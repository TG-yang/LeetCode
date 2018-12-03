#include <iostream>
#include <unordered_map>

using namespace std;

struct RandomListNode {
    int label;
    RandomListNode *next, *random;
    RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};

class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {

        if(!head) return head;

        unordered_map<RandomListNode*,RandomListNode*>mapHash;
        RandomListNode*new_head = new RandomListNode(head->label);
        RandomListNode*node2 = new_head, *node1 = head;

        while(node1->next != NULL){
            mapHash[node1] = node2;
            node1 = node1->next;
            node2->next = new RandomListNode(node1->label);
            node2 = node2->next;
        }
        mapHash[node1] = node2;

        node1 = head;
        node2 = new_head;

        while(node1->next != NULL){
            RandomListNode*random = mapHash[node1->random];
            node2->random = random;
            node1 = node1->next;
            node2 = node2->next;
        }

        node2->random = mapHash[node1->random];

        return new_head;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}