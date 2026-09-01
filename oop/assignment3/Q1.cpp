#include<iostream>
#include<string>
using namespace std;
class Student{
    string name="aditya grover";
    float marks=100;
    friend void display(Student s);

};
void display(Student s){
    cout <<"name : " <<s.name <<endl;
    cout <<"marks : " <<s.marks <<endl;
}
int main(){
    Student s1;
    display(s1);

    return 0;
}