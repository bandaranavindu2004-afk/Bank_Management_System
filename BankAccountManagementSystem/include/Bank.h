#include <vector>
#include "Account.h"
#include "Customer.h"
#include "Transaction.h"

class Bank {
private:
    vector<Account*> accounts;
    vector<Customer> customers;
    vector<Transaction> transactions;
    int nextTransactionID;

public:
    void addCustomer(const Customer& customer);
    void addAccount(Account* account);
    Account* findAccount(int accountNumber);
    void depositMoney(int accountNumber, double amount);
    void withdrawMoney(int accountNumber, double amount);
    void showAllCustomers() const;
    void showAllAccounts() const;
    void showAllTransactions() const;
};