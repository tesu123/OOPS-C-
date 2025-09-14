#include <iostream>
using namespace std;

// Abstract class (only interface, no implementation details)
class Bank
{
public:
    virtual void deposit(double amount) = 0;  // Pure virtual function
    virtual void withdraw(double amount) = 0; // Pure virtual function
    virtual void checkBalance() = 0;          // Pure virtual function
    virtual ~Bank() {}                        // virtual destructor
};

// Concrete class (actual implementation is hidden inside this class)
class BankAccount : public Bank
{
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNo, double initialBalance)
    {
        accountHolder = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount) override
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) override
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    void checkBalance() override
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    // User interacts only with abstract interface (Bank*), not the internal details
    Bank *acc = new BankAccount("Abhijit", 12345, 5000);

    acc->checkBalance();
    acc->deposit(2000);
    acc->withdraw(1000);
    acc->checkBalance();

    delete acc; // free memory
    return 0;
}
