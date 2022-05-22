#include<iostream>
#include<stdio.h>
using namespace std;
void add(int *a,int *b)
{
  *a=*a+*b;
}
int main()
{
  int a=4;
  int b=4;
  add(&a, &b);
  printf("a=%d b=%d\n",a,b);
  return 0;
}