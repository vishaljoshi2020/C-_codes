#include<iostream>
using namespace std;
int main()
{
  //
  int a[7]={0,1,2,3,4,5,6};
  int *p=a;
  p=p+2;
 // cout<<p[2]<<endl;
  ///imp one
  int *u=a;
  int *v=&a[3];
  int d=v-u;
  if(d>0)
  {
    cout<<" v is far away than u"<<endl;
  }
  else
  {
    cout<<" u is far away than v"<<endl;>>
  }
  cout<<d<<endl;
  return 0;

}