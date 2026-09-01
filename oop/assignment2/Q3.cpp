#include<iostream>
#include<string>
using namespace std;
class employee{
    string name;
    int id;
    float salary;
public:
    employee(string name,int id,float salary){
        this->name=name;
        this->id=id;
        this->salary=salary;
    }
    void display(){
         cout <<" \n name : " <<name;
         cout <<" \n id : " <<id;
         cout <<" \n salary : " <<salary;

    }
};
int main(){
    string name;
    int id;
    float salary;
     cout <<"enter the name ";cin >>name;
     cout <<"enter the id ";cin >>id;
     cout <<"enter the salary ";cin >>salary;
    employee s(name,id,salary);
    s.display();
   return 0;
}