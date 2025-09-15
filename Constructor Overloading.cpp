#include <iostream>
using namespace std;

class Person {
    private:
        int age;
    public:
        // Default constructor
        Person() {
            age = 20;
        }
        
        // Parameterized constructor
        Person(int a) {
            age = a;
        }
        
        // Getter function for age
        int getage() {
            return age;
        }
};

int main() {
    // Creating objects using constructors
    Person person1;
    Person person2(45);

    // Accessing private member through public function
    cout << "Age of person1: " << person1.getage() << endl;
    cout << "Age of person2: " << person2.getage() << endl;

    return 0;
}
