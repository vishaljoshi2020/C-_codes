#include<iostream>
using namespace std;
class BankAccount{

public:

    int accNo;

    float accBal;

    BankAccount(int n, float b)
    {

    this->accNo=n;
    
    

     this->accBal=b;

    }

    void showAccount(){

    cout<<accNo<<":"<<accBal;

    }

 

};

int main(){

BankAccount ba1(0,0.4), ba2(0,0.6), ba3(1,1000);

ba1.showAccount();

ba2.showAccount();

ba3.showAccount();

return 0;

}