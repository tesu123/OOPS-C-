#include <iostream>
using namespace std;

class BankAccount
{
public:
    void showAccount()
    {
        cout << "This is a Bank Account." << endl;
    }
};

class SavingsAccount : public BankAccount
{
public:
    void showType()
    {
        cout << "This is a Savings Account." << endl;
    }
};

int main()
{
    SavingsAccount sa;
    sa.showAccount();
    sa.showType();
    return 0;
}
