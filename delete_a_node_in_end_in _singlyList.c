#include <stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};

int linkedListTraverse(struct Node *ptr)
{
  while(ptr!=NULL)
  {
    printf("Element = %d\n",ptr->data);
    ptr = ptr->next;
  }
}


struct Node *DeletionAtEnd(struct Node *head)
{
  struct Node *p = head;
  struct Node *q = p->next;
  while(q->next != NULL)
  {
    p = p->next;
    q = q->next;
  }
  p->next = NULL;
  free(q);
  return head;
}

int main()
{
  struct Node* head,*second,*third;
  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));
  
  // head linked with second
  head->data = 12;
  head->next = second;
  // second linked with third
  second->data = 24;
  second->next = third;
  // third is the end of list
  third->data = 36;
  third->next = NULL;
  
  // Delete Last element
  head = DeletionAtEnd(head);
 
  //Traverse List
  linkedListTraverse(head);
  return 0;
}
