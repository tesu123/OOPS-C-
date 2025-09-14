#include <iostream>
using namespace std;

class Person
{
public:
    void showPerson()
    {
        cout << "I am a Person." << endl;
    }
};

class Student : public Person
{
public:
    void study()
    {
        cout << "I am a Student." << endl;
    }
};

class Employee : public Person
{
public:
    void work()
    {
        cout << "I am an Employee." << endl;
    }
};

class Teacher : public Employee
{
public:
    void teach()
    {
        cout << "I am a Teacher." << endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    s.showPerson();
    s.study();

    t.showPerson();
    t.work();
    t.teach();

    return 0;
}
