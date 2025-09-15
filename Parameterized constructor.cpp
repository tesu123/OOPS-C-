#include <iostream>
using namespace std;

class Wall
{
private:
    int length;
    int height;

public:
    // Parameterized constructor
    Wall(int len, int hgt) : length(len), height(hgt)
    {
    }

    int calculate_area()
    {
        return length * height;
    }
};

int main()
{
    Wall wall(10, 5);
    cout << "Area of wall: " << wall.calculate_area();
    return 0;
}
