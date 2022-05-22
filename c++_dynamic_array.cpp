#include<iostream>
#include<stdio.h>
using namespace std;
int* fun(int size)
{
   int *p=new int[5];
   for(int i=0;i<size;i++)
   {
     p[i]=i+1;
   }
  return p;
}
int main()
{
   int *ptr=fun(5);
   cout<<ptr[0];
   return 0;
}