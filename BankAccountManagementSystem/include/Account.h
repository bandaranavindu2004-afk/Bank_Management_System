#include <iostream>
using namespace std;

class Account
{
private:
    /* data */
    int Account_ID;
    double Balance;


public:
    void display();
};

void Account::display(){
    cout<<"Account ID : "<<Account_ID<<endl;
    cout<<"Balance : "<<Balance<<endl;
}