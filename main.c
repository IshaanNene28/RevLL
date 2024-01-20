#include<stdio.h>
#include<math.h>

struct ListNode {
      int val;
      struct ListNode *next;
  };

struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL)
    {
        return NULL;
    }
    else if(head->next==NULL)
    {
        return head;
    }
    struct ListNode* curr = head;
    struct ListNode* prev = NULL;
    struct ListNode* next = NULL;
    while(curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
