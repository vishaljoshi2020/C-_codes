#include<iostream>
#include<stdio.h>
using namespace std;
void add(int &a,int &b)
{
  a=a+b;
  for(int i=0;i<a;i++)
  {
    cout<<i<<" ";
  }
  
}
int main()
{
  int a=4;
  int b=4;
  // ((when we call add function the whole add function will be called in main function))
  //(( this are called inline function))
  //(( dont use this methos when u have only loops that means complex codes ))
  add(a,b);
  printf("a=%d b=%d\n",a,b);

}