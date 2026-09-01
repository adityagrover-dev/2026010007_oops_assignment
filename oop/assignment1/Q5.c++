#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int roll_no;
    string degree;
    string hostel;
    float cgpa;

    void updateDetails()
    {
        cout << "Enter Updated Name: ";
        cin >> name;
        cout << "Enter Updated Roll No: ";
        cin >> roll_no;
        cout << "Enter Updated Degree: ";
        cin >> degree;
    }

public:

    void addDetails()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cout << "Enter Degree: ";
        cin >> degree;
        cout << "Enter Hostel: ";
        cin >> hostel;
        cout << "Enter Current CGPA: ";
        cin >> cgpa;
    }

    void updateCGPA()
    {
        cout << "Enter Updated CGPA: ";
        cin >> cgpa;
    }

    void updateHostel()
    {
        cout << "Enter Updated Hostel: ";
        cin >> hostel;
    }

    void displaydetails()
    {
        cout << "\nStudent Details" << endl;

        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << cgpa << endl;
    }

    void updateStudent()
    {
        updateDetails();
    }
};

int main()
{
    Student s1;

    s1.addDetails();
    s1.displaydetails();

    s1.updateCGPA();
    s1.updateHostel();

    s1.updateStudent();

    s1.displaydetails();

    return 0;
}