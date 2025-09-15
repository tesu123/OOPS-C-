#include <iostream>
using namespace std;

class Employee {
    public:
        // Constructor
        Employee() {
            cout << "Constructor invoked" << endl;
        }
        
        // Destructor
        ~Employee() {
            cout << "Destructor invoked" << endl;
        }
};

int main() {
    Employee e1;  // Constructor for e1 is called
    Employee e2;  // Constructor for e2 is called

    // Objects go out of scope when main ends, and destructors are called automatically
    return 0;
}
