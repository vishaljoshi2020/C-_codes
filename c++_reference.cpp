#include<iostream>
// referance example
using namespace std;
int main()
{
  int x=10;
  // ince if we used this varibale in a given function it can not be used again
  // alias name of X
  // both x and y have same adress
  int &y=x;

  //important point is u do not need any memory for that
  // its just alis name of x both are pointing to same function
  x++; y++;
  cout<<"the value of x is "<< x<<endl;
   cout<<"the value of y is "<< y<<endl;  
   // 
   cout<<"REFERENCE MEANS Y IS JUST ALIAS OF X  "<<endl;
   cout<<&y<<endl;
   cout<<&x<<endl;
   


}
