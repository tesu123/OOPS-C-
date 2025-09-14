#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base
{
public:
    void display() override
    { // override (C++11) makes it explicit
        cout << "Derived class display" << endl;
    }
};

int main()
{
    Base *ptr;
    Derived d;
    ptr = &d;

    ptr->display(); // Calls Derived’s version (due to virtual)
}
