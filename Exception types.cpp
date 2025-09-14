#include <iostream>
#include <exception>
using namespace std;

int main()
{
    try
    {
        int *arr = new int[100000000000]; // too large
    }
    catch (bad_alloc &e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}
