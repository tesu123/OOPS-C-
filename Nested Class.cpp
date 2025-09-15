#include <iostream>
using namespace std;

class University
{
public:
    string uniName;

    // Nested class
    class Department
    {
    public:
        string deptName;
        void showDept()
        {
            cout << "Department: " << deptName << endl;
        }
    };

    void showUni()
    {
        cout << "University: " << uniName << endl;
    }
};

int main()
{
    University u;
    u.uniName = "Jadavpur University";
    u.showUni();

    // Object of nested class
    University::Department d;
    d.deptName = "Computer Science";
    d.showDept();

    return 0;
}
