#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int roll_no;
    float cgpa;
public:
    student(){
        name="aditya";
        roll_no=1;
        cgpa=92;
        
        cout <<" name : " <<name;
         cout <<"\n roll number : "<<roll_no;
         cout <<"\n CGPA : " <<cgpa;
         cout <<endl;
    }
    student(string n,int r_no){
        name=n;
        roll_no=r_no;
        
        cout <<" name : " <<name;
         cout <<"\n roll number : "<<roll_no;
        //  cout <<"\n CGPA : " <<cgpa;
        cout <<endl;
    }
    student(string n,int r_no,float per){
        name=n;
        roll_no=r_no;
        cgpa=per;
        
        cout <<" name : " <<name;
         cout <<"\n roll number : "<<roll_no;
         cout <<"\n CGPA : " <<cgpa;
         cout <<endl;
    }
};
int main(){
    string n;
    int r_no;
    float per;
     
    cout <<"enter the name ";cin >>n;
    cout <<"enter the roll number ";cin >>r_no;
    cout <<"enter the CGPA ";cin >>per;
    student s1;
    student s2(n,r_no,per);
    student s3(n,r_no);
   return 0;
}