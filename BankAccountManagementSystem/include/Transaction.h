#include <iostream>
#include <string>
#include <ctime>
using namespace std;


class transaction{
    private:
        int transID;
        string transdate_time;
        string transtype;
        float transamount;

    public:
        transaction(string type, float amount):transtype(type), transamount(amount){}

        void setCurrentDateTime(){};

        void showtrans() const {
            cout << "Transaction ID : " << transID << endl;
            cout << "Transaction Date & Time : " <<transdate_time<< endl;
            cout << "Transaction Type : " << transtype << endl;
            cout << "Transaction Amount : " << transamount << endl;
        }
};


void transaction::setCurrentDateTime() {
        time_t now = time(0);
        transdate_time = ctime(&now);
    }