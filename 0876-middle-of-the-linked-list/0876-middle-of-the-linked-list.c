/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* single=head;
    struct ListNode* twice=head;
    while(twice!=NULL && twice->next!=NULL){
        single=single->next;
        twice=twice->next->next;
    }
    return single;
}