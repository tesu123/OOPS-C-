#include <iostream>
using namespace std;

class Animal
{
public:
    // Base class function
    virtual void sound()
    { // virtual keyword enables runtime binding
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal
{
public:
    // Overriding base class function
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    // Overriding base class function
    void sound() override
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Animal *a; // base class pointer
    Dog d;
    Cat c;

    a = &d;
    a->sound(); // Calls Dog's version

    a = &c;
    a->sound(); // Calls Cat's version

    return 0;
}
