#include <iostream>
using namespace std;

void bankSystem()
{
    // Local class inside a function
    class Account
    {
    public:
        string holder;
        double balance;

        void showAccount()
        {
            cout << "Holder: " << holder << ", Balance: " << balance << endl;
        }
    };

    // Object of local class
    Account acc;
    acc.holder = "Abhijit";
    acc.balance = 5000;
    acc.showAccount();
}

int main()
{
    bankSystem(); // local class works only inside this function
    return 0;
}
