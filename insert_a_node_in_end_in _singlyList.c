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
struct Node* insertAtEnd(struct Node* head,int data)
{
  struct Node* ptr;
  ptr=(struct Node*)malloc(sizeof(struct Node));
  struct Node *p = head;
  int i=0;
  while(p->next!=NULL)
  {
    p = p->next;
    i++;
  }
  ptr->data = data;
  p->next = ptr;
  ptr->next = NULL;
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
  
 
  head = insertAtEnd(head,48);
  linkedListTraverse(head);
  return 0;
}
