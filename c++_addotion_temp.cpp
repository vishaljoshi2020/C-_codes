#include<iostream>
using namespace std;
template <class T>
// 
class addition
{
      public:
     
      T add(T a=0,T b=0)
      {
          return a + b;
          
      }
};
int main()
{
  addition a1;
  cout<<a1.add(1,2)<<endl;

}