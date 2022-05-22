#include<iostream>
// (( when u write function inside the class that are inline function and outside the class ))
// (( outline function))
// we can also make inline function by using keyword((inline )) in front of function
using namespace std;
class Rectangal
{
  private:
  int length;
  int breadth;
  public:
  Rectangal();
  Rectangal(int l, int b);
  Rectangal(Rectangal &r);
  int  getLength()
  {
     return length;
  }
  int getBreadth()
  {
      return breadth;
  }
 void setLength(int l);
 void  setBreadth(int b);
  int area();
  int perimeter();
  bool isSquare();
   ~Rectangal();

};
Rectangal::Rectangal()
{
    length =1;
    breadth=1;
}
Rectangal::Rectangal(int l,int b)
{
    length=l;
    breadth=b;
}
Rectangal::Rectangal(Rectangal &r)
{
    length=r.length;
    breadth=r.breadth;
}

void Rectangal::setBreadth(int b)
{
    breadth=b;

}
void Rectangal::setLength(int l)
{
    length=l;
}
int Rectangal::area()
{
    return length*breadth;
}
int Rectangal::perimeter()
{
    return 2*(length+breadth);
}

 Rectangal::~Rectangal()
{
  cout<<"dont"<<endl;
}

int main()
{
    Rectangal r1(10,5);
    cout<<r1.area()<<" "<<r1.perimeter()<<endl;
   
    return 0;
}
