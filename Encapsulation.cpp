#include <iostream>
using namespace std;

class BankAccount
{
private:
    // Encapsulated data members (hidden from outside)
    string accountHolder;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string name, int accNo, double initialBalance)
    {
        accountHolder = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    // Public method to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Public method to withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Public method to check balance (controlled access)
    void checkBalance()
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    // Create an object of BankAccount
    BankAccount acc("Abhijit", 12345, 5000);

    // Access only through public methods (data is safe inside class)
    acc.checkBalance();
    acc.deposit(1500);
    acc.withdraw(2000);
    acc.checkBalance();

    return 0;
}
