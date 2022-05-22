#include<stdio.h>
#include<iostream>
using namespace std;
class rectangle
{
  private:
  int width;
  int length;
  public:
  void getLength(int l)
  {
   if(l>=0)
   {
     length=l;
   }
   else
   {
     cout<<"the length can not be negetive "<<endl;
   
   }
  }
  void getWidth(int w)
  {
    if(w>=0)
    {
      width=w;
    }
    else
    {
      cout<<"the width can not be negetive "<<endl;
     
    }
  }
  int area()
  {
    
    return width*length;
  }
  int perimeter()
  {
    return 2*(length+width);
  }
  void display(rectangle *p)
  {
     cout<<p->length<<endl;
     cout<<p->width<<endl;
  }
};
int main()
{
   rectangle *p=new rectangle();
   int l;
   int w;
   cin>>l;
   cin>>w;
  
   p->getWidth(w);
   p->getLength(l);
   p->display(p);
   cout<<p->area()<<endl;
   cout<<p->perimeter()<<endl;
   return 0;

   

}