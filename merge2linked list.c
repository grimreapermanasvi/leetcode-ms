
/* Definition for singly-linked list.
  struct ListNode* ({
     int val;
      struct ListNode *next;
  });*/
  
 
 struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//check the base condition 
  if(list1==NULL&&list2==NULL)
    return NULL;
//we add 0 elements of l1 so return l2 
    if(list1==NULL)
    return list2;
//we add 0 elements of l2 so return l1 
    if(list2==NULL)
    return list1;
//done so as if the element in l1 is small
    struct ListNode* last, *third;
    if(list1->val<list2->val)
    {
        third=list1;
        last=list1;
        list1=list1->next;
        last->next=NULL;
    }
    //done so because l2 is small 
    else
    {
        third=list2;
        last=list2;
        list2=list2->next;
        last->next=NULL;
    }
    while(list1!=NULL&&list2!=NULL)
    {
        if(list1->val<list2->val)
        {
        last->next=list1;
        last=list1;
        list1=list1->next;
        last->next=NULL;
        }
        else
        {
            last->next=list2;
            last=list2;
            list2=list2->next;
            last->next=NULL;
        }
    }
    while(list1!=NULL)
    {
        last->next=list1;
        last=list1;
        list1=list1->next;
        last->next=NULL;
    }
    while(list2!=NULL)
    {
        last->next=list2;
        last=list2;
        list2=list2->next;
        last->next=NULL;
    }
    return third;


}