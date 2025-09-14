#include <iostream>
using namespace std;

class LivingBeing
{
public:
    void breathe()
    {
        cout << "Living beings breathe." << endl;
    }
};

class Human : public LivingBeing
{
public:
    void think()
    {
        cout << "Humans can think." << endl;
    }
};

class Student : public Human
{
public:
    void study()
    {
        cout << "Students study." << endl;
    }
};

int main()
{
    Student s;
    s.breathe();
    s.think();
    s.study();
    return 0;
}
