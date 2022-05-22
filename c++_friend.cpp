#include<iostream>
//#include<stdlib.h>
using namespace std;
class complex
{
private:
  int real;
  int imag;
public:
  complex();
  complex(int real, int imag);
  friend complex operator+(complex c1, complex c2);
  //complex operator+(complex c);
  void print_info();

};

complex::complex()
{
  real = 0;
  imag = 0;
}
complex::complex(int real, int imag)
{

  this->real = real;
  this->imag = imag;

}

//complex complex::operator+(complex c)
complex operator+(complex c1, complex c2)
{
  complex temp;
  temp.real = c1.real + c2.real;
  temp.imag = c1.imag + c2.imag;
  return temp;
}

void complex::print_info()
{
  cout << real << " " << imag << endl;
}

int main()
{
  complex c1(4, 5);
  complex c2(5, 6);
  complex c3 = c1 + c2;
  c3.print_info();

}