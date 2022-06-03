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

struct Node *DeletionWithValue(struct Node *head,
int value)
{
  struct Node *p = head;
  struct Node *q = head->next;
  if(p->data == value)
  {
    head = head->next;
    free(p);
  }
  else
  {
    while(q->data != value && q->next !=NULL)
    {
      p = p->next;
      q = q->next;
    }
 
    if(q->data == value)
    {
      p->next = q->next;
      free(q);
    }
    else
    {
      printf("Value not present\n");
    }
  }
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
  
 
  // Delete with value
  head = DeletionWithValue(head,48);
  //Traverse List
  linkedListTraverse(head);
  return 0;
}
