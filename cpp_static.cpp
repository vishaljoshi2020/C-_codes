#include<stdio.h>
#include<iostream>
using namespace std;
void fun()
{
  //((it acts like it is golbal varibale but only visible to the function where it is called))
  static int v=0;
  v++;
  cout<<v<<endl;

}
int main()
{
  fun();
  fun();
  fun();
  return 0;
}