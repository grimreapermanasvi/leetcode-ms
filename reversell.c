/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* a,*b,*c;
    a=NULL;
    b=head;
    while(b){
        c=b->next;
        b->next=a;
        a=b;
        b=c;
    }
    return a ;
}