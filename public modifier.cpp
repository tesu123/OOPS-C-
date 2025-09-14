#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    void display()
    {
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s;
    s.name = "Abhijit"; // accessible
    s.display();        // accessible
}
