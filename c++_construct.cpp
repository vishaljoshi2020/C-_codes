#include<iostream>
using namespace std;

class demo_construct
{
   private:
   int length;
   int breadth;

   public:

   /*demo_construct()
   {
     length=1;
     breadth=1;
   }*/
   demo_construct(int length=1,int breadth=1)
   {
      
       this->length=length;
      this->breadth=breadth;
      
   }
   demo_construct(demo_construct  &d1)
   {
     length=d1.length;
     breadth=d1.breadth;
   }
   int  area()
   {
     return length*breadth;
   }

};
int main()
{
  demo_construct d1(10,4);
  demo_construct d2(d1);
  cout<<d2.area();
}
