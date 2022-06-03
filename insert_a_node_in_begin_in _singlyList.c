#include <stdio.h>
#include<stdlib.h>

struct Node{
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
struct Node* insertAtBegin(struct Node *head,int data)
{
  struct Node *ptr;
  ptr = (struct Node*)malloc(sizeof(struct Node));
  ptr->data = data;
  ptr->next = head;
  return ptr;
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
  // third linked with end of list
  third->data = 36;
  third->next = NULL;
  
  head = insertBegin(head,48);
  linkedListTraverse(head);
  return 0;
}
