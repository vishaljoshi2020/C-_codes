#include<iostream>
using namespace std;
int main()
{
  int a[5]={0,1,2,3,4};
  int *p=a;
  for(int i=0; i<5; i++)
  {
    cout<<p[i]<<" ";
  }
 cout<<endl;
  for(int i=0; i<5; i++)
  {
    cout<<i[a]<<" ";
  }
  cout<<endl;
  for(int i=0; i<5; i++)
  {
    cout<<*(a+i)<<" ";
  }
  cout<<endl;
  return 0;
}