/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if (!head) return NULL;
    struct ListNode *ptr;
    ptr=(struct ListNode*)malloc(sizeof(struct ListNode));
    ptr->next=head ;
    head =ptr ;
     while(head->next!=NULL)
     {
         if(head->next->val==val)
         {
             head->next=head->next->next;
         }
         else 
             head=head->next;
     }
     return ptr->next;
}