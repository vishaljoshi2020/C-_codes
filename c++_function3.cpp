#include<iostream>
using namespace std;
template <class t>

int maxi(t a,t b,t c=0)
{
  return a+b+c;
}
 
int main()
{
 
  cout<<maxi(1,2,3)<<endl;
   cout<<maxi(1,2)<<endl;
  return 0;
  
}