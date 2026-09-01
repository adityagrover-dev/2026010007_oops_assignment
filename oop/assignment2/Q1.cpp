#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int roll_no;
public:
    student(){
        cout <<"enter the name ";cin >>name;
        cout <<"enter the roll number ";cin >>roll_no;
    }
    void display(){
         cout <<" name : " <<name;
         cout <<"\n roll number : "<<roll_no;

    }
};
int main(){
    student s;
    s.display();
   return 0;
}