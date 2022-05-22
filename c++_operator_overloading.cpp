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
  complex operator+(complex c);
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
complex complex::operator+(complex c)
//complex complex::operator+(complex c)
{
  complex temp;
  temp.real = c.real + real;
  temp.imag = c.imag + imag;
  return temp;
}

void complex::print_info()
{
  cout << real << " " << imag << endl;
}

int main()
{
  int N = 3;
  int x, y;
  // complex c1(2, 5);
  // complex c2(2, 9);
  // //complex c3 = c1.add(c2);
  // complex c3 = c1 + c2;
  // c3.print_info();

  //complex* arr = new complex[N];
  complex* arr = (complex*)malloc(sizeof(complex) * N);
  for(int i = 0; i < N; i++)
  {
    cin >> x;
    cin >> y;
    arr[i] = complex(x, y);
  }
  for (int i = 0;i < N;i++)
  {
    arr[i].print_info();
  }
  int var = 1;
  int i, j;
  while (var)
  {
    cout << "the vlaue of i and j" << endl;
    cin >> i >> j;
    i = i - 1;
    j = j - 1;
    complex a = arr[i] + arr[j];
    a.print_info();
    cout << "if u want to continue 1 else 0" << endl;
    cin >> var;
  }
}