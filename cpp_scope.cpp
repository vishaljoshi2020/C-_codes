#include<stdio.h>
#include<iostream>
using namespace std;
int g=5;
void fun()
{
  int g=10;
  //(( it will accsess the nearset variable ))
  g++;
  {
    int g=0;
    g++;
    cout<<g<<" ";
  }
  cout<<g<<" ";
}
int main()
{
  g++;
  fun();
  cout<<g<<" ";
  return 0;
  
}