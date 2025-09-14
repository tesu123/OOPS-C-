#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
};

class Student : public Person
{
public:
    void setName(string n) { name = n; } // accessible in child
    void display() { cout << "Name: " << name << endl; }
};

int main()
{
    Student s;
    // s.name = "Abhijit"; ❌ ERROR: protected
    s.setName("Abhijit"); // ✅ allowed via function
    s.display();
}
