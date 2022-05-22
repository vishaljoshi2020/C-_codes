#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
  string s="hello worldvvvvv";
  int len=s.length();
  cout<<len<<endl;

 //( cout<<sizeof(s)<<endl;)
  int c= s.capacity();
  cout<<c<<endl;

  //(( u can change the capacity of string ))
  s.resize(20);


  //( claer the string)
  //((((s.earase also works same ))))
  s.clear();

  cout<<s<<endl;

  int check=s.empty();
  cout<<"the value of check   "<<check<<endl;
 if(check==1)
 {
   cout<<"the string is empty"<<endl;

 }
 else
 {
   cout<<"the string is not empty "<<endl;
 }

  s.append("bye");
  s.append("bye");
  
  //((insert with 2 arguments at which index u want to insert))
 
  s.insert(3,"vj");
// ((at which index u want to insert and how many numbers of given string ))
//((syntax will be (index_at_which_u_want_to_insert,"string",num_of_elemnts_u_want_from_given_string)))
  s.insert(6,"AA",1);

//(replace function)
//syntax((from_which_index,how_many_numbers,string))
 s.replace(3,4,"ZZ");

 //((push operator))
 s.push_back('v');

  ///((pop operator))
  s.pop_back();
  s.pop_back();
  s.pop_back();

 cout<<s<<endl;

  ///swaping two strings
  string s1="vishal";
  string  s2="joshi";
  s1.swap(s2);  
  cout<<s1<<" "<<s2<<endl;

 
 string s3="vishal";
 char s4[20];
 s3.copy(s4,s3.length());
 //((whenevre we use copy function we have to add null terminator to string))
 s4[s3.length()]='\0';
 cout<<"we copied "<<s4<<endl;

  s3.copy(s4,3);
  s4[3]='\0';
 cout<<s4<<endl;

 //# finding ocuring of text in main strings
 string s5="how ARE U MY BOY";
 cout<<s5.find("MY")<<endl;
  
  //((finding frpm right side ))
  cout<<s5.rfind("B")<<"the right"<<endl; 

  string s6="visjhal vjoshoi";
  cout<<"the last occurence of letter"<<endl;
//(( we even can give multiple letters in the function))
  cout<<s6.find_last_of('os')<<endl;
  cout<<"the first occurence of letter"<<endl;
  cout<<s6.find_first_of('j')<<endl;
  //((getting sub string ))
  string s8="vishal joshi";
  cout<<" sub string is "<<s8.substr(3,4)<<endl;
  string s9="vishal jos";
  //((comparision  of sgring ))
  cout<<"the comparidion  "<<s8.compare(s9);

  string s10="vishal";
  string s11="vishal";
  s11=s10+s11;
  cout<<s11<<endl;
  


}