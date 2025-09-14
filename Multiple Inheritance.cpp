#include <iostream>
using namespace std;

class Employee
{
public:
    void work()
    {
        cout << "I am an Employee." << endl;
    }
};

class Musician
{
public:
    void playMusic()
    {
        cout << "I am a Musician." << endl;
    }
};

class Person : public Employee, public Musician
{
public:
    void introduce()
    {
        cout << "I am a Person with multiple roles." << endl;
    }
};

int main()
{
    Person p;
    p.work();
    p.playMusic();
    p.introduce();
    return 0;
}
