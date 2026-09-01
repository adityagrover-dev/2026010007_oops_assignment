#include<iostream>
#include<string>
using namespace std;
struct student{
    string name;
    string degree;
    string hostel;
    int roll_no;
    float cgpa;

    void addDetails();
    void updateDetails();
    void updateCGPA();
    void updateHostel();
    void displayDetails();
};
void student::addDetails()
{
    cout <<"enter name\t";
    cin >>name;
    cout <<"enter roll number\t";
    cin >>roll_no;
    cout <<"enter degree\t";
    cin >>degree;
    cout <<"enter hostel\t";
    cin >>hostel;
    cout <<"enter cgpa\t";
    cin >>cgpa;
    cout <<endl;

}
void student::updateDetails()
{
    cout <<"enter updated name\t";
    cin >>name;
    cout <<"enter updated roll number\t";
    cin >>roll_no;
    cout <<"enter updated degree\t";
    cin >>degree;
    cout <<endl;

}
void student::updateCGPA()
{
    cout <<"enter updated cgpa\t";
    cin >>cgpa;

}
void student::updateHostel()
{
    cout <<"enter updated hostel\t";
    cin >>hostel;

}
void student::displayDetails()
{
    cout <<"STUDENT DETAILS\n";
    cout <<"name\t" <<name <<endl;
    cout <<"roll number\t" <<roll_no <<endl;
    cout <<"degree\t" <<degree <<endl;
    cout <<"hostel\t" <<hostel <<endl;
    cout <<"current cgpa\t" <<cgpa <<endl;

}

int main(){
    student s1;
     s1.addDetails();
     s1.updateDetails();
     s1.updateCGPA();
     s1.updateHostel();
     s1.displayDetails();
   return 0;
}