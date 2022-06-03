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

struct Node *DeletionAtbegin(struct Node* head)
{
  struct Node *ptr = head;
  head = head->next;
  free(ptr);
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
  
  //Delete First element
  head = DeletionAtbegin(head);
  
  //Traverse List
  linkedListTraverse(head);
  return 0;
}
