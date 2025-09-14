#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance; // hidden from outside

public:
    BankAccount(double b) { balance = b; }
    void deposit(double amount) { balance += amount; }
    void showBalance() { cout << "Balance: " << balance << endl; }
};

int main()
{
    BankAccount acc(5000);
    // acc.balance = 10000; ❌ ERROR: private
    acc.deposit(2000); // ✅ allowed
    acc.showBalance();
}
