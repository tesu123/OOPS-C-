#include <iostream>
using namespace std;

class Shape
{
public:
    void showShape()
    {
        cout << "This is a Shape." << endl;
    }
};

class Circle : public Shape
{
public:
    void drawCircle()
    {
        cout << "Drawing a Circle." << endl;
    }
};

class Rectangle : public Shape
{
public:
    void drawRectangle()
    {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    c.showShape();
    c.drawCircle();
    r.showShape();
    r.drawRectangle();
    return 0;
}
