#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  char s1[20]="vishal joshi";
  char s2[10]="shal";
  //(str str to find the string)
  //((strstr  if the given input string is found it will return true value else NULL))
  // ((cout can not display NULL so u eant to display u have tp store in int value ))
   if(strstr(s1,s2)!=NULL)
   {
     cout<<"the we found the matching string  " <<strstr(s1,s2);
   }
   else
   {
  cout<<" string not found ";
   }
   //(strchar function)
   char m[20]="vishal vvvv";
   cout<<strrchr(m,'v')<<endl; 
   //((check from right side))
   cout<<strchr(m,'v')<<endl; 

   char x[20]="Vishal vvvv";
   char y[20]="vishal"; 
//   int d=strcmp(n,m);
// (( compares the ascci value ))
   cout<<strcmp(y,x)<<endl;
   cout<<x-y<<endl;
   

}