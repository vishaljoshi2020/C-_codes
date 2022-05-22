#include<iostream>
#include<stdio.h>
using namespace std;
class rectangle
{
  public:
  int width;
  int height;
  int area()
  {
    return (width * height);
  }
  int peremeter()
  {
    return 2*(width + height);
  }
  
};
int main()
{
   rectangle r1;
   rectangle *p;
   p=&r1;
   scanf("%d%d",&p->width,&p->height);
  
   cout<<p->area();

}