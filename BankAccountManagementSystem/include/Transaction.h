#include <iostream>
#include <string>
using namespace std;

struct date{
    int day, month, year;
}

class transaction{
    private:
        int transID;
        date transdate;
        string transtype;
        float transamount;

    public:
        transaction(string type, float amount):transtype(type), transamount(amount){}

        void showtrans() const {
            cout << "Transaction ID : " << transID << endl;
            cout << "Transaction Date : " << transdate.day << "/" << transdate.month << "/" << transdate.year << endl;
            cout << "Transaction Type : " << transtype << endl;
            cout << "Transaction Amount : " << transamount << endl;
        }
};