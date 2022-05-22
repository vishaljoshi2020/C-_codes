#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  // this is (length function)
  // length(destination,source)
  char s[20];
  char v[20];
   int d=strlen(" hello");
   cout<<d<<endl;
   // (string  join)
   cout<<" enter the full name "<<endl;
   //cin.i
   //cin.ignore();
   cin.getline(s,15);
   cin.getline(v,15);
   // syntax (destination,source)
   strcat(s,v);
   cout<<s<<endl;
   strncat(s,v,3);
   cout<<s<<endl;
   strcpy(s,v);
   cout<<s<<endl;
   

   return 0;
}