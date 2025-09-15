#include <iostream>
using namespace std;

class myClass
{
public:
    void display()
    {
        cout << "Hello world!" << endl;
    }
};

int main()
{
    myClass myobj;
    myobj.display();
    return 0;
}
