#include<iostream>
using namespace std;
#define N 2
class demo
{
   private:

   int len;
   int br;

   public:
  
   demo();
   demo(int l,int br);
  int area();
  
};
demo:: demo()
{
  len=1;
  br=1;
}
demo::demo(int l,int b)
{
  len=l;
  br=b;
}
int demo::area()
{
  return len*br;
}

int main()
{
  int l,b;
  
  //cout<<r.area();
  // (( dynamic array))
  demo *arr=new demo[N];
  //(( stack ))
  //demo arr[N];
  for(int i=0;i<N;i++)
  {
    cin>>l;
    cin>>b;
    arr[i]=demo(l,b);
   
  }
  for(int i=0;i<N;i++)
  {
    cout<<arr[i].area()<<endl;
  }
}