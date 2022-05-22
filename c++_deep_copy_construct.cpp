#include<iostream>
#include<stdio.h>

using namespace std;

class deep_copy_construct
{
  int a;
  int *p;
  public:
  
  deep_copy_construct(int x)
  {
     a=x;
     p=new int[a];
     for(int i=0;i<5;i++)
     {
        scanf("%d",&p[i]);
     }
  }
  deep_copy_construct(deep_copy_construct  &d)
  {
    a=d.a;
    p=new int[a];
    for(int i=0;i<5;i++)
     {
        scanf("%d",&p[i]);
     }
  }
  void print_info()
  {
    for(int i=0;i<5;i++)
    {
      printf("%d\t",p[i]);
    }
  }

};

int main()
{
  deep_copy_construct d1(5);
  deep_copy_construct d2(d1);
  d2.print_info();

  
}