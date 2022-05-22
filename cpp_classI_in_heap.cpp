#include<iostream>
#include<stdio.h>
using namespace std;
class rectangle
{
  public:
  int w;
  int l;
  int area()
  {
    return w*l;
  }
  int peremeter()
  {
    return 2*(l+w);
  }
};
int main()
{
  rectangle r2;
  rectangle *r1=new rectangle();
  r1->l=10;
  r1->w=10;
  r2.w=10;
  r2.l=10;
  cout<<r1->area()<<endl;
  cout<<r1->peremeter()<<endl;
  cout<<r2.area()<<endl;
  cout<<r2.peremeter()<<endl;
  return 0;

}
