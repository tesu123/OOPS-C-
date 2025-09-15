#include <iostream>
using namespace std;

class Room
{
public:
    double length, width;

    // Constructor
    Room(double l, double w)
    {
        length = l;
        width = w;
    }

    // Member function
    double calculateArea()
    {
        return length * width;
    }
};

int main()
{
    // Object created, constructor is called automatically
    Room room1(10.5, 8.5);
    Room room2(12.0, 10.0);

    cout << "Area of Room 1: " << room1.calculateArea() << endl;
    cout << "Area of Room 2: " << room2.calculateArea() << endl;

    return 0;
}
