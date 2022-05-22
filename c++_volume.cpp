#include<iostream>
using namespace std;
class volume
{
  public:
  int l;
  int b;
  int h;
  int  vol(int l=0,int b=0,int h=0 )
  {
  
    return l*b*h;
  }
  
};
int main()
{
  volume b1;
  volume b2;
  cout<<b1.vol(2,5,6)<<endl;
  cout<<b2.vol(3,5,6);
  return 0;

}