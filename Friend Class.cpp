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

        // Friend class declaration
        friend class BoxPrinter;
};

class BoxPrinter {
    public:
        void printLength(Box b) {
            cout << "Length of box is: " << b.length << endl;
        }
};

int main() {
    Box box1(15);
    BoxPrinter printer;
    printer.printLength(box1);  // Accesses private member 'length'
    return 0;
}
