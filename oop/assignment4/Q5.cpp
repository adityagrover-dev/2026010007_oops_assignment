#include<iostream>
#include<string>
using namespace std;
class College{
    public:
    string clg_name;
    College(string c_name){
        clg_name=c_name;
        cout <<"college constructor executed";
    }

};
class Department :public College{
    public:
    string dept_name;
    Department(string c_name,string d_name):College(c_name){
    
        dept_name=d_name;
        cout <<"\n department constructor executed";

    }
    void display(){
        cout <<"\n college name : " << clg_name;
        cout <<"\n department name : " << dept_name;
    }

};
int main(){
    string c_name,d_name;
    cout <<"\n enter college name ";
    cin >>c_name;
    cout <<"\n enter department name ";
    cin >>d_name;
    Department s(c_name,d_name);
    s.display();
    return 0;
}