#include <iostream>
using namespace std;

class myClass
{
public:
    void display();
};

void myClass::display()
{
    cout << "Hello world" << endl;
}

int main()
{
    myClass myobj; // output: Hello world
    myobj.display();
    return 0;
}
