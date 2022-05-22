#include<iostream>
using namespace std;
class complex
{
  private:
  int real;
  int img;
  public:
  complex();
  complex(int real,int  img);
  friend complex operator+(complex c1,complex c2);
  void display();
};
complex::complex()
{
  real = 0;
  img = 0;
}
complex::complex(int real, int img)
{
  this->real = real;
  this->img = img;
}
void complex::display()
{
  cout<<real<<" "<<img;
}
complex operator+(complex c1,complex c2)
{
  complex temp;
  temp.real=c1.real+c2.real;
}
