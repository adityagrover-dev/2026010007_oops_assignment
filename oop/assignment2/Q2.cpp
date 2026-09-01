#include<iostream>
#include<string>
using namespace std;
class rectangle{
    float length;
    float breadth;
    float area;
public:
    rectangle(float a,float b){
        length=a;
        breadth=b;
        cout <<" area of rectangle : " <<length*breadth;
    }
    // void display(){
    //      cout <<" area of rectangle : " <<length*breadth;

    // }
};
int main(){
    float a,b;
     cout <<"enter the length ";cin >>a;
        cout <<"enter the breadth ";cin >>b;
    rectangle s(a,b);
    // s.display();
   return 0;
}