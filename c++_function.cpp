#include<iostream>
using namespace std;
int add(int a,int b)
{
  return a+b;
}
float add(float a, float b)
{
  return a+b;
}
int add(int a,int b,int c)
{
  return a+b+c;
}
int main()
{
  int a=3;
  int b=4;
  int c;
  // (( we can use same function name with diffrent parameters ))
 c=add(a,b);
 float x=2.5;
 float y=2.6;
 float d=add(x,y);
 int z=add(a,b,c);  
 cout<<c<<" "<<d<<endl;
 return 0;
}