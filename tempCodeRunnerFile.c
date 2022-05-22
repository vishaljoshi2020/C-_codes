
#include <stdio.h>
#include <stdlib.h>
struct dll
{
  int data;
  struct dll *next;
  struct dll *prev;
};
typedef struct dll d;
d *head = NULL;

void insertion_sort(int i)
{
  int key;
  if (i == 0)
  {
    key = 0;
  }
  else
  {
    printf("enter the elements \n");
    scanf("%d", &key);
  }
  d *newn = (d *)malloc(sizeof(d));
  if (newn == NULL)
  {
    printf("no memory allocated\n");
    return;
  }
  if (head == NULL)
  {
    newn->data = key;
    newn->next = NULL;
    newn->prev = NULL;
    head = newn;
  }
  else
  {
    d *cur = head;
    d *ptr = NULL;
    //  d *temp = NULL;
    while (cur && cur->data < key)
    {
      ptr = cur;
      cur = cur->next;
    }
    if (cur == NULL)
    {
      newn->data = key;
      newn->next = NULL;
      newn->prev = ptr;
      ptr->next = newn;
    }
    else
    {
      // temp=cur->next;
      newn->data = key;
      newn->next = cur;
      cur->prev = newn;
      ptr->next = newn;
      newn->prev = ptr;
    }
  }
}
void display()
{

  d *cur = head;
  while (cur)
  {
    printf("%d\t", cur->data);
    cur = cur->next;
  }
  printf("\n");
}
void reverse()
{
  d *cur = head;
  while (cur->next)
  {
    cur = cur->next;
  }
  while (cur->prev)
  {
    printf("%d\t", cur->data);
    cur = cur->prev;
  }
  printf("\n");
}
int main()
{
  int n;
  printf("enter how many numbers u want to enter \n");
  scanf("%d", &n);
  for (int i = 0; i < (n + 1); i++)
  {
    insertion_sort(i);
  }
  d *temp = head;
  head = head->next;
  free(temp);
  display();
  reverse();
  return 0;
}