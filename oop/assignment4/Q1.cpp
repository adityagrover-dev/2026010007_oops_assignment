#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    int age;
    void acceptPerson(){
        cout <<"enter the name ";cin >>name;
        cout <<"enter the age ";cin >>age;
    }
};
class Student:public Person{
    public:
    int roll_no;
    string course;
    

    void accept(){
        acceptPerson();
        cout <<"enter the roll number ";cin >>roll_no;
        cout <<"enter the course ";cin >>course;

    }
    void display(){
        cout <<" name : " <<name <<endl;
        cout <<" age : " <<age <<endl;
        cout <<" roll number : " <<roll_no <<endl; 
        cout <<" course : " <<course <<endl;
    }

};

int main(){
    Student s;
    s.accept();
    s.display();
    return 0;
}