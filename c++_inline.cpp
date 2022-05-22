#include<iostream>
using namespace std;

class test
{
  public:
    void print_info()
    {
       cout<<"hello class "<<endl;

    }
    // (( why we write inline because it will genrate the code in main only   ))
   inline void test_1();
   
};
void test::test_1()
{
  cout<<"hello test"<<endl;
}
int main()
{
    test t;
    t.print_info();
    t.test_1();
    return 0;
   
}