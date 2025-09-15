#include <iostream>
using namespace std;

class Box {
    private:
        int length;

    public:
        Box() {
            length = 0;
        }

        Box(int l) {
            length = l;
        }

        // Friend function declaration
        friend void printLength(Box b);
};

// Friend function definition
void printLength(Box b) {
    cout << "Length of box is: " << b.length << endl;
}

int main() {
    Box box1(10);
    printLength(box1);  // Accesses private member 'length'
    return 0;
}
