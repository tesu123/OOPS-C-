#include <iostream>
using namespace std;

// Class definition
class Room
{
public:
    double length;
    double width;
    double height;

    // Member function to calculate area
    double calculateArea()
    {
        return length * width;
    }

    // Member function to calculate volume
    double calculateVolume()
    {
        return length * width * height;
    }
};

int main()
{
    // Create objects of Room
    Room room1, room2;

    // Assign values to room1
    room1.length = 10.5;
    room1.width = 8.5;
    room1.height = 7.0;

    // Assign values to room2
    room2.length = 12.0;
    room2.width = 10.0;
    room2.height = 6.5;

    // Display results for room1
    cout << "Room 1 Area: " << room1.calculateArea() << endl;
    cout << "Room 1 Volume: " << room1.calculateVolume() << endl;

    // Display results for room2
    cout << "Room 2 Area: " << room2.calculateArea() << endl;
    cout << "Room 2 Volume: " << room2.calculateVolume() << endl;

    return 0;
}
