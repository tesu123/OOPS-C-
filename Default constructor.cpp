#include <iostream>
using namespace std;

class Wall
{
private:
    double length;

public:
    Wall() : length(5.5)
    {
        cout << "creating a wall" << endl;
        cout << "length = " << length << endl;
    }
};

int main()
{
    Wall wall;
    return 0;
}
