#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int i=0;
    char s[30]="x=20;y=30;z=30;";
    char  *t=strtok(s,";");
    
   // ((loop will  only run  for number of semicolens u have in the given string ))
    while(t)
    {  
      i++;
      cout<<t<<endl;
      t=strtok(NULL,";");
    }

  cout<<i<< "value "<<endl;
  char m[20]="2568";
  char n[20]="54.69"; 
  long int x=strtol(m,NULL,10);
  float y=strtof(n,NULL);
  cout<<x<<" "<<y<<endl;
  cout  <<typeid  (y).name()  <<endl;


}