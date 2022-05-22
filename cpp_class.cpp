#include<iostream>
#include<stdio.h>
using namespace std;

class rectangle
{
  public:
  int length;
  int breadth;
  int area()
  {
    return (length*breadth);
  }
  int peremeter()
  {
   
    return 2*(length+breadth);
  }
};

int main()
{
  rectangle r1,r2;
  printf("enter the length and breadth of first rectangle\n");
  scanf("%d%d",&r1.length,&r1.breadth);
  printf("enter the length and breadth of 2nd rectangle\n");
  scanf("%d%d",&r2.length,&r2.breadth);
  
  cout<<r1.area()<<" "<<r2.area()<<endl;
  cout<<r1.peremeter()<<" "<<r2.peremeter();
  return 0 ;

}