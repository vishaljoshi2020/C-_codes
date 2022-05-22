#include<iostream>
#include<stdio.h>
using namespace std;
int g=10;

int main()
{
  int g=15;
  {
    int g=20;
    cout<<g<<endl;
  }
  cout<<g<<endl;
  cout<<::g<<endl;
  return 0;

}