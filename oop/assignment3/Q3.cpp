#include<iostream>
#include<string>
using namespace std;
class Employee{
    float salary;
    public:
    Employee(float sal){
        salary=sal;
    }

    friend void display(Employee s1,Employee s2);

};
void display(Employee s1,Employee s2){
    if(s1.salary>s2.salary){
        cout <<s1.salary <<" is greater than " <<s2.salary;}
    else if(s1.salary<s2.salary){
        cout <<s2.salary <<" is greater than " <<s1.salary;}
    else{
        cout <<s2.salary <<" is equal to " <<s1.salary;}

}
int main(){
    float x,y;
    cout <<"enter first Employee salary ";cin >>x;
    cout <<"enter second Employee salary ";cin >>y;
    
    Employee s1(x);
    Employee s2(y);
    display(s1,s2);

    return 0;
}