#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    void acceptPerson(){
        cout <<"enter name : ";cin >>name;
    }
};
class Employee:public Person{
    public:
    int emp_id;
    void acceptEmployee(){
        acceptPerson();
        cout <<"enter employee id : ";cin >>emp_id;
    }
};
class Manager:public Employee{
    public:
    string dept;
    void acceptManager(){
        acceptEmployee();
        cout <<"enter department : ";cin >>dept;
    }
    void display(){
        cout <<"\n name : "<<name <<endl;
        cout <<"employee id : "<<emp_id <<endl;
        cout <<"department : "<<dept <<endl;

    }
};
int main(){
    Manager s;
    s.acceptManager();
    s.display();
}