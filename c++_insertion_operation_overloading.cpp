#include<iostream>
using namespace std;
class complex
{
private:
  int real;
  int img;

public:
  complex();
  complex(int real, int img);
  friend complex operator+(complex c1, complex c2);
  friend ostream& operator<<(ostream& o, complex& c);

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
complex operator+(complex c1, complex c2)
{
  complex temp;
  temp.real = c1.real + c2.real;
  temp.img = c1.real + c2.real;
  return temp;
}
ostream& operator<<(ostream& o, complex& c)
{
  o << c.real << " " << c.img;
  return o;

}
int main()
{
  complex x(5, 5);
  complex y(5, 5);
  complex z = x + y;
  cout << z;
  return 0;
}