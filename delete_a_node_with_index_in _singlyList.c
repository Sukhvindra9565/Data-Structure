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

struct Node *DeletionAtIndex(struct Node *head,int index)
{
  struct Node *p = head;
  int i=0;
  while(i != index-1)
  {
    p = p->next;
    i++;
  }
  struct Node *q = p->next;
  p->next = q->next;
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
 
  // Delete Indexed element
  head = DeletionAtIndex(head,1);

  //Traverse List
  linkedListTraverse(head);
  return 0;
}
