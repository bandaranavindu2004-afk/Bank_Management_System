#include <string>
#include <iostream>
using namespace std;

class Customer {
    private:
        string customerID;
        string name;
        string address;
        int phonenum;
    
    public:
        Customer(string customerID, string name, string address, int phonenum){
            this->customerID=customerID;
            this->name=name;
            this->address=address;
            this->phonenum=phonenum;
        }

        void getid(){
            cout << "Customer ID : " << customerID << endl;
            cout << "Customer Name : " << name << endl;
            cout << "Customer Address : " << address << endl;
            cout << "Customer Phone Number : " << phonenum << endl;
        }
};