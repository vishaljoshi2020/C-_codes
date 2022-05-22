#include<iostream>
using namespace std;
class rational
{
private:
  int p;
  int q;
public:
  rational()
  {
    p = 1;
    q = 1;

  }
  rational(int p, int q)
  {
    this->p = p;
    this->q = q;
  }
  friend rational operator+(rational r1, rational r2);
  friend ostream& operator<<(ostream& o, rational& r);


};
rational operator+(rational r1, rational r2)
{
  rational r;
  r.p = (r2.q) * (r1.p) + (r2.p) * (r1.q);
  r.q = (r1.q) * (r2.q);
  return r;


}
ostream& operator<<(ostream& o, rational& r)
{
  o << r.p << "/" << r.q << endl;
  return o;
}
int main()
{
  rational x(4, 5), y(4, 5);
  rational z = x + y;
  cout << z;
  return 0;
}