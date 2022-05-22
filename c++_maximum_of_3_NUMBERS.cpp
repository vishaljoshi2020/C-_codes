#include<iostream>
using namespace std;
//(( u have to assing zero by line wise we can assing anywhere))
int maximum(int a,int b=0,int c=0)
{
  if(a>b&& a>c) 
  {
    return a;
  }
  else if(b>c)
  {
    return b;
  }
  return c;
}
int main()
{
   cout<<maximum(5,3,6)<<endl;
    cout<<maximum(5,3)<<endl;
   return 0;
}