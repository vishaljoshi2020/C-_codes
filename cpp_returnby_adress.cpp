#include<iostream>
#include<stdio.h>
using namespace std;
int & func(int &x)
{
  printf("defjje ");
  x=x+2;
  return x;
}
int main()
{
  int a;
  func(a)=func(a)=10;
  cout<<a;
  return 0;
}