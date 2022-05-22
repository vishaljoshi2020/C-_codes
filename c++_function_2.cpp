#include<iostream>
#include<stdio.h>
using namespace std;

template<class t>
t maxi(t a,t b) 
{
  return a>b?a:b;
}
int main()
{
  //((u have to add  with same data types))
  
   cout<<maxi(12,21)<<endl;
   return 0;
}
