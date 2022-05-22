#include<iostream>
using namespace std;

//((we can not use any memers if we put them in private ))
/// if we set them private then we can acess them by call the  the function in the  class
class student 
{
   string name ;
   public:
   int age ;
  
   bool gender ;
   void readName(string s)
   {
     name =s;
   }

   void printinfo()
   {
     cout<<name<<"  "<<age<<" ";
     if(gender==0)
     {
       cout<<"male"<<endl;
     }
     else
     {
       cout<<"female"<<endl;
     }
     
   }

};
int main()
{
  int n;
  string s;
  cout <<" entr the value of n "<<endl;
  cin>>n;
  student a[n];
  for(int i=0; i<n; i++)
  {
    cin>>a[i].gender;
    cin>>a[i].age;
    
     cin>>s;
     a[i].readName(s);
  }
  
  for(int i=0; i<n; i++)
  {
      a[i].printinfo();
     
  }
  return 0; 
}