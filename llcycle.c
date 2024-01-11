/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *n,*m;

    if (!head) return false;

    n=m=head;
    do{
        n=n->next;
        m=m->next;

        if(m) m= m->next;
    } while (m&&n!=m);

    if(m) return true ;
    return false;
}