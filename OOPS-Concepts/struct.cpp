#include <iostream>
using namespace std;

struct Student
{
    int regNo;
    char name[20];
    int age;
};

class Stud
{
private:
    struct Student S;

public:
    void Read()
    {
        cout << "----------------------------------" << endl;
        cout << "Enter the student details.\n";
        cout << "Enter the student name: ";
        cin >> S.name;
        cout << "Enter the student age: ";
        cin >> S.age;
        cout << "Enter the student register no.: ";
        cin >> S.regNo;
        cout << "----------------------------------" << endl;
    }

    void Show()
    {
        cout << "----------------------------------" << endl;
        cout << "Student details.\n";
        cout << "Student name: " << S.name << endl;
        cout << "Student age: " << S.age << endl;
        cout << "Student register no.: " << S.regNo << endl;
        cout << "----------------------------------" << endl;
    }
};

int main()
{
    Stud A;   // Instantiating object A
    A.Read(); // Calling function
    A.Show(); // Calling function

    return 0;
}