#include <iostream>
using namespace std;

class Wall
{
private:
    double length;
    double weight;

public:
    // Parameterized constructor
    Wall(double len, double wgt) : length(len), weight(wgt)
    {
        cout << "Parameterized constructor called" << endl;
    }

    // Copy constructor
    Wall(const Wall &obj) : length(obj.length), weight(obj.weight)
    {
        cout << "Copy constructor called" << endl;
    }

    double calculateArea()
    {
        return length * weight;
    }
};

int main()
{
    // create object using parameterized constructor
    Wall wall1(10.5, 8.6);

    // create new object using copy constructor
    Wall wall2 = wall1;

    cout << "Area of wall1: " << wall1.calculateArea() << endl;
    cout << "Area of wall2: " << wall2.calculateArea() << endl;

    return 0;
}
