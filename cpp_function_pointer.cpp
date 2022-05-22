#include<iostream>
#include<stdio.h>
using namespace std;
int max(int a,int b)
{
   return a>b?a:b;
}
int main()
{
    int (*f)(int ,int );
    f=max;
    int d=(*f)(5,2);

    cout<<d<<endl;
    return 0;
}