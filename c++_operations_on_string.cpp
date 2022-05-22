// when u intializr the  the string  with charecter pointer then u can include the
// spaces length will be counted before onlu spaces 
#include<iostream>
using namespace std;
int main()
{
    char v[20];
   // 
   /* char s[20];
    char v[20];
    cout<<"enter the name ";
    cin>>s;
    cout<<s<<endl;*/
    // to include space
    cout<<"enter the name "<<endl;
    //cin.get(v,20);
    // the enter ehich u give in cout will taken as input in  S string then u will be taken as input 
    // in in V string   
    //cin.ignore();
    cin.getline(v,20);
    cout<<v<<endl;
    //cin.getline(s,20);
    return 0;
}
