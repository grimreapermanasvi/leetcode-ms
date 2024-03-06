struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *a, *b, *p = NULL;
    a = b = head;

    // Move pointer b n nodes ahead
    while (n-- > 0) {
        b = b->next;
    }

    // Move pointers a and b until b reaches the end
    while (b) {
        p = a;
        a = a->next;
        b = b->next;
    }

    // Handle the case when the node to be removed is the head of the list
    if (a == head) {
        head = head->next;
    } else {
        p->next = a->next;
    }

    free(a);

    return head;
}
