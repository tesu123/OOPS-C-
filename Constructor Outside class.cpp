#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, width;

public:
    Rectangle(int l, int w); // declare

    int area()
    {
        return length * width;
    }
};

// constructor definition
Rectangle ::Rectangle(int l, int w)
{
    length = l;
    width = w;
}

int main()
{
    Rectangle r(5, 3);
    cout << "Area of rectangle: " << r.area()
         << endl;
    return 0;
}